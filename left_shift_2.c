#include<stdio.h>
#include<malloc.h>
#include<stdio.h>

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
void left_shift(void);

void main()
{
    int choice;
    do
    {
      printf("\n\n 1.....create");
        printf("\n\n 2.....display");
        printf("\n\n 3....left_shift");
        printf("\n\n 4....exit");
        printf("\n\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:create_node();
                break;
            case 2:display();
                break;
            case 3: left_shift();
                break;
            case 4:exit(0);
                break;
            default:printf("\n wrong choice");  
        }
    } while ((choice>=1)&&(choice<=4));
}

void create_node(void)
{
    if(root==NULL)
    {
        root=(node)(malloc(sizeof(struct list)));
        printf("enter the velue for list");
        scanf("%d",&val);
        root->info=val;
        root->next=NULL;
        current=root;
    }
    else
        {
           temp= (node) (malloc(sizeof(struct list)));
           printf("\nenter value");
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
    void left_shift(void)
    {
      node p=root;
      node q=root;
      node r;
      r=root->next;
      while(p)
      {
        p=p->next;
        //r=root;
      }
      p->next=q;
      q->next=NULL;
      q=p;
      r=root;
      


    }