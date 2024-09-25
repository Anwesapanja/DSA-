//lobaries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//some macro functions
#define isDig(ch) (ch >= '0' && ch <= '9')
#define charToInt(ch) ((ch - 48))

//function prototype declaration
void push(int *, const int , int *);
int pop(int *, int* );

/*
//a dynamic string function for endless string input
int getString(char **str){

    //clears the buffer
    fflush(stdin);

    //some pointers and variables
    int size = 1;
    char *tmp =  (char *)malloc(size * sizeof(char));
    char ch;

    //loop to take continious character input and stores them dynamically
    do {
        ch = getchar();
        tmp[size - 1] = ch;
        tmp = (char *)realloc(tmp, ++size * sizeof(char));
    } while(ch != '\n');

    //null character for setting the range
    tmp[size - 2] = '\0';
    *str = tmp;
    fflush(stdin);

    //return length
    return (size-2);
}
*/


int main(){
    //variables and pointers
    char string[100];
    int top = -1;
    int value = 0;

    //taking a string input
    printf("Enter an equation: ");
    fgets(string, 100, stdin);

    int length = strlen(string);

    //making an integer stack with it
    int stack[length];
    int a, b;

    //looping through each character
    for(int i = 0; i < length; i++){
        if(isDig(string[i])){
            //pushing elemnt in stack if it is an integer
            push(stack, charToInt(string[i]), &top);
        } else {
            //checking if stack is empty
            if(top == -1){
                printf("Stack is empty!\n");
                return 0;
            } else {
                //poping top element from stack
                a = pop(stack, &top);

                if(top == -1){
                    printf("Stack is empty!\n");
                    return 0;
                } 

                b = pop(stack, &top);
            }

            //switching based on operator type
            //apply operation and pushes the value in stack
            switch(string[i]){
                case '+':
                    value = (a + b);
                    push(stack, value, &top);
                    break;
                
                case '-':
                    if(a > b)
                        value = a - b;
                    else value = b - a;
                    push(stack, value, &top);
                    break;

                case '*':
                    value = (a * b);
                    push(stack, value, &top);
                    break;
                
                case '/':
                    value = (a / b);
                    push(stack, value, &top);
                    break;

                default:
                    break;
            }

            printf("Step -- \n A=%d %c B=%d | value= %d\n", a, string[i], b, value);
        }
    }

    //finally printing the value
    printf("The value is %d\n", value);

    return 0;
}

void push(int *stack, const int num, int *top){
    //function to push element on stack
    stack[++(*top)] = num;
}

int pop(int *stack, int *top){
    //function to pop elment from stack
    return (stack[(*top)--]);
}