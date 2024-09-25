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
void right_shift_display(void);

int main()
{
    int choice=0;
    do
    {
        //int choice=0;
        printf("\n\n 1....create node");
        printf("\n\n 2....display");
        printf("\n\n 3......Right shift display");
        printf("\n\n enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create_node();
                   break;
            case 2: display();
                    break;
            case 3:  right_shift_display();
                    break;
            case 4: exit(0);
                    break;
            default:printf("\n\n wrong choice");                              
        }
    } while ((choice>=1)&&(choice<=4));
}    
//end of main);
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
void right_shift_display(void)
{
    node p=root;
    int count=0;
    while(p)
    {
        count++;
        p=p->next;
    }
    printf("the number of the node will be: %d",count);
    int key=0;
    p=root;
    printf("\n\n where from start the list: ");
    scanf("%d",&key);
    printf("\n\n the value of the node will be: ");
    while(count>=key)
    {
        val=p->info;
        printf("\n\n %d",val);
        p=p->next;
        while(current==NULL)
        {
           p=root;
           current->next=p;
           p->next=NULL;
           if(key=p->info)
           break;
           }     
        }
}