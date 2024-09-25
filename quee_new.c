#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int val;
int rear=-1;
int front=-1;
int quee[10];

void insert(int);
void delete(void);
void display(void);

void main()
{
    int choice=0;
    do
    {
    printf("\n\n 1.....insert");
    printf("\n\n  2....delete");
    printf("\n\n 3....display");
    printf("\n\n 4...exit");
    printf("\n\n enter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("enter the value: ");
            scanf("%d",&val);
            insert(val);
        }break;
        case 2:delete();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
        default:printf("\n\n wrong choice: ");       
    }
    }while((choice>=1)&&(choice<=4));
}

void insert(int x)
{
    if(rear==(10-1))
    {
        printf("queue is full");
    }
   if (rear==-1)
   {
    front=0;
   }
   quee[++rear]=x;
}
void delete(void)
{
    if(rear==-1)
    {
        printf("queue is empty");
    }
    val=quee[front++];
    printf("\n\nthe delete value will be: %d",val);
} 
void display(void)
{
    if(rear==-1)
    {
        printf("sorry!!");
        //getch();
    }
    else
    {
    int i;
    printf("\n\nthe value will be: ");
    for(i=rear;i>=front;i--)
    {
        printf("\n %d\n\n",quee[i]);
    }
    }
}   

