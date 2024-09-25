#include<stdio.h>
#include<stdlib.h>

struct list
{
    int info;
    struct list* next;
};
typedef struct list* node;
node root,temp,current;
int val;

void insert(void);
void display(void);
void delete(void);

void main()
{
    int choice=0;
    do
    {
      printf("\n\n1.....insert");
      printf("\n\n 2....display");
      printf("\n\n 3....delete");
      printf("\n\n 4...exit");
      printf("\n\n enter the value: ");
      scanf(" %d",&choice);
      switch(choice)
      {
        case 1:insert();
            break;
        case 2:display();
            break;
        case 3:delete();
            break;
        case 4:exit(0);
            break;
        default: printf("wrong choice");                 
      }  /* code */
    } while ((choice>=1)&&(choice<=4));
}
void insert(void)
{
    if(root==NULL)
    {
        root=(node)(malloc(sizeof(struct list)));
        printf("enter the value: ");
        scanf("%d",&val);
        root->info=val;
        root->next=NULL;
        current=root;
    }
    else
    {
        temp=(node)(malloc(sizeof(struct list)));
        printf("enter the value: ");
        scanf("%d",&val);
        temp->info=val;
        temp->next=current;
        current=temp;
    }
}    
void delete(void)
{
   node p=root;
   node q=current;
   if(q->next)
   {
    while((q->next->next!=NULL))
    {
        q=q->next;

    }
    root=q;
    q->next=NULL;
    free(p);
   }
}
void display(void)
{
    if(root==NULL)
    {
        printf("SORRY");
    }
    node p=root;
    node q=current;
    printf("\n\n the values will be: ");
    while(q!=NULL)
    {
        val=q->info;
        printf("\n\n %d",val);
        q=q->next;
    }
}