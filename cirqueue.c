#include<stdio.h>
#include<stdlib.h>

int quee[10];
int rear=-1;
int front=-1;
int val;

void insert(int);
void delete(void);
void display(void);

void main()
{
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
    if((rear==10-1)&&(front==0))
    {
        printf("the queue is full");
    }
    else if (front == -1) /* Insert First Element */
    {
        front = rear = 0;
        quee[rear] = x;
    }
 
    else if (rear == 10-1 && front != 0)
    {
        rear = 0;
        quee[rear] = x;
    }
 
    else
    {
        quee[++rear]=x;
    }    
}
void delete(void)
{
    if(front==-1)
    {
        printf("empty");
    }
     val= quee[front];
    quee[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == 10-1)
        front = 0;
    else
        front++;
    printf("\n\n %d is removed\n",val);
    //return val;
}
void display(void)
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ",quee[i]);
    }
    else
    {
        for (int i = front; i < 10; i++)
            printf("%d ", quee[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("%d ", quee[i]);
    }
}    


