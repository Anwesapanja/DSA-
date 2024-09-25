#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[10];//global to all
int val;
int top=-1; //pointing elements of stalls

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
                printf("\n enter value for the stack");
                scanf("%d",&val);
                push(val);
            }
            break;
            case 2:
            {
                pop();
               // printf("%d is popped from stack\n",val);
            }  
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default: printf("\n wrong choice");
        } //end of switch
    }
    while((choice>=1)&&(choice<=4));
} //end of main();

void push(int x)
{
    if(top==(10-1))
    {
        printf("\n stack is overflow. so cannot perform push");
        getch();
        return;
    }
    else
    {
        stack[++top]=x;
    }
} //end of push function
void  pop( void)
{
    if(top==-1)
    {
        printf("stack is underflow condition pop cannot perform");
        getch();
        
    }
    else
    {
        val=stack[top--];
        printf("%d is popped ",val);
    }
}
void display(void)
{
    int i;
    if(top==-1)
    {
        printf("\n sorry no values");
        getch();
        return;
    }
    else
    {
        printf("the display value will be");
        for(i=0;i<=top;i++)
        {
            printf("\n %d\n",stack[i]);
        }
    }
}