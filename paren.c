#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char stack1[10],stack2[10];
int val;
int top1=-1;
int top2=-1;

void push1(char);
void push2(char );
void pop(void );

void main()
{
    int i,j,len;
    char A[10];
    printf("\n\nthe string will be: ");
    gets(A);
    len=strlen(A);
    printf("the length of the string will be: %d",len);
    for(int i=0;i<len;i++)
    {
        if((A[i]=='(')||(A[i]==')'))
        {
            if(A[i]=='(')
            {
                push1('(');
            }
            if(A[i]==')')
            {
                push2(')');
            }
        }
        
    }
    int len1,len2;
    len1=strlen(stack1);
    len2=strlen(stack2);
    printf("the length of len1 %d",len1);
    printf("\n\nthe length of the len2 %d",len2);
    if(len1==len2)
    {
        printf("\n\nmatched");
    }
    else
    {
        printf("\n\nunmatched");
    }
}

void push1(char x)
{
   if(top1==(10-1))
    {
        printf("\n stack is overflow. so cannot perform push");
        getch();
        return;
    }
    else
    {
        stack1[++top1]=x;
    }
}
/*void  pop( void)
{
    if(top==-1)
    {
        printf("stack is underflow condition pop cannot perform");
        getch();
        ss
    }
    else
    {
        val=stack[top--];
        printf("%d is popped ",val);
    }
}*/
void push2(char y)
{
   if(top2==(10-1))
    {
        printf("\n stack is overflow. so cannot perform push");
        getch();
        return;
    }
    else
    {
        stack2[++top2]=y;
    }
}