#include<stdio.h>
#include<stdlib.h>
int stack[10];
int top=-1;
int val;

void push(int);
void pop(void);
void display(void);

void main()
{
    int choice=0;
    do
    {
        printf("\n\n1....push");
        printf("\n\n2...pop");
        printf("\n\n3....display");
        printf("\n\n4.....exit");
        printf("\n\n\nenter my choice :  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("the value will be: ");
                scanf("%d",&val);
                push(val);
            }break;
            case 2: pop();
                    break;    
            case 3: display();
                    break;
            case 4:exit(0);
                    break;
            default:printf("wrong choice");                
        }
        /* code */
    } while ((choice>=1)&&(choice<=4));
}
void push( int x)
{
    if(top==(10-1))
    {
        printf("overloaded");
    }
    else
    {
        stack[++top]=x;
    }
} 
void pop(void)
{
    if(top==-1)
    {
        printf("sorr! no nodes");
    }
      
     else
     {
       val= stack[top--];
       printf("the popped value %d ",val);
     }
}
void display(void)
{
    int i;
    if(top==-1)
    {
        printf("sorry");
    }
    else
    {
    for(i=0;i<=top;i++)
     printf("\n\n%d",stack[i]); 
    } 
}

 