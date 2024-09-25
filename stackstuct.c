#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
    int A[10];
    int val;
    int top;
}s;
s.top=-1;
void push (int );
void  pop(void );
void display(void);
void main()
{
    int choice=0;
    do
    {
        //clrser();
        printf("\n 1....push");
        printf("\n 2....pop");
        printf("\n 3....display");
        printf("\n 4 ....exit");
        printf("\n\n\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("enter value");
                scanf("%d",&s.val);
                push s.val;
            }
            break;
            case 2:
            {
                
            }
