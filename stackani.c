// stack with fixed sized array
#include <stdio.h>

//function prototype declarations
void push(int* , int, int* );
void pop(int* , int, int* );
void peek(int *, int );

//main function
int main()
{   
    //length of array
    int size;

    //inputting the array size
    printf("Enter size of the stack: ");
    scanf("%d", &size);

    //variable declarations
    int array[size];
    int top = -1;
    int choice;

repeat: //jump statement

    //choices
    puts("Options---");
    puts("1. Push\t2.Pop");
    puts("3. Peek\t4.Exit");
    printf(":-");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            push(array, size, &top);
            goto repeat;

        case 2:
            pop(array, size, &top);
            goto repeat;

        case 3:
            peek(array, top);
            goto repeat;

        case 4:
            return 0;

        default:
            puts("Not an option");
            goto repeat;
    }

    return 0;
}

void push(int *arr, int size, int* top){
    //function to push elemet to the stack if the stack isn't full

    //safety checks
    if(arr == NULL || size == 0)
        return;

    if(*top == (size - 1)){
        puts("Stack is full");
        return;
    } else {
        //incrementing the top index pointer
        *top = (*top + 1);

        printf("Enter a value: ");
        scanf("%d", &arr[*top]);
    }
}

void pop(int *arr, int size, int *top){
    //function to pop top element from the stack if isn't empty

    //safety checks
    if(arr == NULL || size == 0)
        return;

    if(*top == - 1){
        puts("Stack is Empty");
        return;
    } else {
        printf("%d removed\n", arr[(*top)--]);
    }
}

void peek(int *arr, int top){
    //function to display the top element

    if(arr == NULL)
        return;

    if(top == -1){
        puts("Stack is empty");
        return;
    } else {
        printf("%d\n", arr[top]);
    }
}