#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[10];
int val;
int *top;
 



void push(int  );
void pop(void);
void display(void);

void main()
{
    
    int choice=0;
    do
    {
        printf("\n 1.....push");
        printf("\n 2......pop");
        printf("\n 3..... display");
        printf("\n 4......exit");
        printf("\n\n\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("\n eneter your value for stack");
                scanf("%d",&val);
                push(val);
            }
            break;
            case 2:
            {
                pop();
               // printf("%d is popped from the stack",val);
            }
            break;
            case 3:
            {
                display();
            }
            break;
            case 4:
            {
                exit(0);
            }
            break;
            default:printf(" Wrong choice");
        }
    }while((choice>=1)&&(choice<=4));
}

void push(int x)
{
    if(*top ==(10-1))
    {
        printf("the stack is over flow");
        getch();
        return;
    }
    else
    {
        (*top=(++(*top)));
        stack[*top]=x;
        printf("Push completed");
    }
}
void  pop(void)
{
    if(*top==-1)
    {
        printf("stack is underflow");
        getch();
        return;
    }
    else
    {
        *top=((*top)--);
        val=stack[*top];
        printf("%d is popped from stack",val);
    }
}
void display(void)
{
    if(*top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        int i;
        printf("the display will be: ");
        for(i=0; i<*top; i++)
        {
            printf("\n %d\n",stack[i]);
            getch();
            return;
        }
    }
}

