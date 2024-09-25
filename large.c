#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct list
{
    int info;
    struct list* next;
};
typedef struct list* node;
node root,temp,current;
int val;
void create_node(void);
void display(void);
void max_value(void);

void main()
{
    int choice;
    do
    {
      printf("\n\n 1....create");
      printf("\n\n 2....display");
      printf("\n\n 3.....max value");
      printf("\n\n 4....exit");
      printf("enter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1: create_node();
          break;
        case 2:display();
          break;
        case 3:max_value();
          break;
        case 4:exit(0);
          break;
        default:printf("\n\n wrong choice");         
      }   /* code */
    } while ((choice>=1)&&(choice<=4));
}
   void create_node(void)
   {
    if(root==NULL)
    {
    root=(node)(malloc(sizeof(struct list)));
    printf("enter the value for list");
    scanf("%d",&val);
    root->info=val;
    root->next=NULL;
    current=root;
   }  
   else
   {
    temp=(node)(malloc(sizeof(struct list)));
    printf("\n\nenter value");
    scanf("%d",&val);
    temp->info=val;
    temp->next=NULL;
    current->next=temp;
    current=temp;
   } 
   }   
   void display(void)
    {
        node p;
        p=root;
        if(p==NULL)
        {
            printf("sorry no,nodes");
           // getch();
            return;
        }
        else
        {
            printf("\n values are");
            while(p)
            {
                val=p->info;
                printf("\n %d",val);
                p=p->next;
            }
        }
    }

    void max_value(void)
    {
      node p;
      p=root;
      int r=p->info;
      while(p)
      {
        val=p->info;
        if(r>val)
        {
          printf("the max value will be: %d",r);
          //break;
        }
        r=val;
        p=p->next;
      }

    }
