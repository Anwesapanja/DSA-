#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct list
{
   int info;
   struct list* next;
};
typedef struct list* node;
node root1,root2,temp1,temp2,current1,current2;
int val1,val2;
void create_firstlinklist(void);
void create_seclinklist(void);
void display_firstlinklist(void);
void display_seclinklist(void);
void concatenate(void);
//void display_concatenate(void);

void main()
{
    int choice;
    do
    {
      printf("\n\n1...create first");
      printf("\n\n2....creat 2nd");
      printf("\n\n3....first display");
      printf("\n\n4....2nd display");
      printf("\n\n 5....concatenate");
     // printf("\n\n 6.....display concatenate");
      printf("Enter a choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:create_firstlinklist();
        break;
        case 2:create_seclinklist();
        break;
        case 3:display_firstlinklist();
        break;
        case 4:display_seclinklist();
        break;
        case 5:concatenate();
        break;
        //case 6:display_concatenate();
        //break;
        case 7:exit(0);
        break;
        default: printf("\nwrong choice");
      }
    }while((choice>=1)&&(choice<=6));    
}
    void create_firstlinklist(void)
    {
        if(root1==NULL)
        {
            root1=(node)(malloc(sizeof(struct list)));
            printf("enter the velue for list");
            scanf("%d",&val1);
            root1->info=val1;
            root1->next=NULL;
            current1=root1;
        }
        else
        {
           temp1= (node) (malloc(sizeof(struct list)));
           printf("\nenter value");
           scanf("%d",&val1);
           temp1->info=val1;
           temp1->next=NULL;
           current1->next=temp1;
           current1=temp1;
        }      
    }
    void create_seclinklist(void)
    {
        if(root2==NULL)
        {
            root2=(node)(malloc(sizeof(struct list)));
            printf("enter the velue for list");
            scanf("%d",&val2);
            root2->info=val2;
            root2->next=NULL;
            current2=root2;
        }
        else
        {
           temp2= (node) (malloc(sizeof(struct list)));
           printf("\nenter value");
           scanf("%d",&val2);
           temp2->info=val2;
           temp2->next=NULL;
           current2->next=temp2;
           current2=temp2;
        }      
    }
    void display_firstlinklist(void)
    {
        node p1;
        p1=root1;
        if(p1==NULL)
        {
            printf("sorry no,nodes");
           // getch();
            return;
        }
        else
        {
            printf("\n values are");
            while(p1)
            {
                val1=p1->info;
                printf("\n %d",val1);
                p1=p1->next;
            }
        }
    }
    void display_seclinklist(void)
    {
         node p2;
        p2=root2;
        if(p2==NULL)
        {
            printf("sorry no,nodes");
           // getch();
            return;
        }
        else
        {
            printf("\n values are");
            while(p2)
            {
                val2=p2->info;
                printf("\n %d",val2);
                p2=p2->next;
            }
        }
    }
    void concatenate(void)
    {
        node p;node q;
        node r;
        p=root1;
        q=root2;
        if((root1==NULL)&&(root2==NULL)){
            printf("empty\n");
        }
        else
        {
            while(p)
            {
                r=p;
                p=p->next;
            }
            r->next=q;
        }
    }
    /**void display_concatenate(void)
    {
        node p;
        p=root1;
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
    }**/
    





    


