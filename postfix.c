#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void push(int);
//int pop(void);

int main()
{
    void push(int);
    int pop(void);
    int leng,val,x,i;
    char A[100];
    printf("enter the string");
    gets(A);
    leng=strlen(A);
    printf("%d is the length od the string",leng);
    if(isdigit(val))
    {
        push(val);
    }
    else
    {
        int p=pop();
        int q=pop();
        for(i=0;i<leng;i++)
        { 
            
            if(A[i]=='+')
            {
                val=p+q;
            }
            else if(A[i]=='-')
            {
                val=p-q;
            }
            else if(A[i]=='*')
            {
                val=p*q;
            }
            else if(A[i]=='/')
            {
                val=p/q;
            }
        }
    }
    push(val);
    val=pop();
    printf(" result value will be: %d",val);
    return 0;
}