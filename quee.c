#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int quee[10];
int val;
int rear=-1;
int front=-1;

void insert(int );
void delete(void);
void display(void );

void main()
{
    front=rear=-1;
   int choice=0;
    do
    {
        printf("\n1.....insert");
        printf("\n2.....delete");
        printf("\n 3.....display");
        printf("\n 4....exit");
        printf("\n\n\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("enter the value for the quee");
                scanf("%d",&val);
                insert(val);
            }
            break;
            case 2:
            {
                delete();
            }
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("\n wrong choice");
        }

    }
    while((choice>=1)&&(choice<=4));
}
void insert(int x)
{
    if(rear==9)
    {
        printf("quee is full");
    }
    else
    {
    
     if(rear==-1)
     {
     front=0;
     }
     quee[++rear]=x;
     
    } 
}
void delete(void)
{
    if(rear==-1)
    {
        printf("empty");
    }
    else
    {
        int i;
        val=quee[front++];
        printf("\n%d is removed\n",val);
    }
}    
    void display(void)
    {
        int i;
        if(rear==-1)
        {
            printf("sorry no values");
            getch();
           // r//eturn 0;
        }
        else
        {
            printf("the display will be: ");
            for(i=rear;i>=front;i--)
            {
                printf("\n %d\n",quee[i]);
            }
        }
        
    }

