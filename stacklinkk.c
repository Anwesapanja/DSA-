#include<stdio.h>
#include<stdlib.h>

struct list
{
   int info;
   struct list* next;
};
typedef struct list* node;
node root,temp,top;
int val;
void create_node(void);
void display(void);
void delete(void);

void main()
{
    int choice;
    do
    {
        printf("\n\n 1.....create");
        printf("\n\n2.....display");
        printf("\n\n 3.....delete");
        printf("\n\n 4....exit");
        printf("\n\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create_node();
               break;
            case 2: display();
              break;
            case 3: delete();
            break;
            case 4:exit(0);
            break;
            default:printf("\n\n wrong choice");
        }
    }while((choice>=1)&&(choice<=4));
}
void create_node(void)
{
    if(top==NULL)
    {
        root=(node)(malloc(sizeof(struct list)));
        printf("enter a  value for the list");
        scanf("%d",&val);
        root->next=NULL;
        root->info=val;
        top=root;
    }
    else
    {
      temp=(node)(malloc(sizeof(struct list)));
      printf("\n enter a value");
      scanf("%d",&val);
      temp->info=val;
      temp->next=top;
      top=temp;
    }
}
void display(void)
{
    node p;
    p=root;
    node q=top;
    //p->next=NULL;
    if(q==NULL)
    {
        printf("sorry,no nodes");
        return;
    }
    else
    {
    /* int count=0;
       while(p)
       {
        count++;
        p=p->next;
       } 
       printf("the number of node will be: %d", count);*/
       printf("\n\n the values are: ");
       while(q!=NULL)
       {
            val=q->info;
            printf("%d\n\n",val);
            q=q->next;

       }
    }
}
void delete(void)
{
    node p=root;
    node temp;
    node q=top;
    top=top->next;
    free(q);
}

