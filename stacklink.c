#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct list
{
   int info;
   struct list* next;
};
typedef struct list* node;
node root,temp,top,r;
int val;
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
                //printf("\n enter value for the stack");
                //scanf("%d",&val);
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
}  
void push(int x)
{
    int n=10;
   node p=root;
   int count=0;
   while(p)
    {
        count++;
        p=p->next;
    }    
    if(count>n)
    {
        printf("Stack is overflow");
    }
    if(root==NULL)
    {
    root=(node)(malloc(sizeof(struct list)));
    printf("enter the velue for list");
    scanf("%d",&val);
    root->info=val;
     root->next=NULL;
    top=root;
    }
    else
    {
     temp= (node) (malloc(sizeof(struct list)));
    printf("\nenter value");
     scanf("%d",&val);
     temp->info=val;
    temp->next=NULL;
    top->next=temp;
     top=temp;
    }
}
void pop(void)
{
    //int n=10;
   node p;
   p=root;
   int count=0;
   while(p)
    {
        count++;
        p=p->next;
    }    
    if((count==-1)&&(root==NULL))
    {
        printf("Empty and stack is underflow");
    }
     p=root;
    node tmp;
    if(p->next){
        while(p->next->next != NULL){
            p = p->next;
        }

        tmp = p->next;
        p->next = NULL;
        free(tmp);
    }
}
void display(void)
{
    node p=root;
   int count=0;
   node q;
   while(p)
   {
    count++;
    r=p;
    p=p->next;
   }
   p=root;
printf("the number of node will be: %d",count);
int m=1;
printf(" \n\n the values will be: ");
  while(m<=count)
  {
    while(p!=r)
    {
        q=p;
        p=p->next;
    }
    val=p->info;
    r=q;
    printf("\n %d",val);
    p=p->next;
    m++;
  }
}

