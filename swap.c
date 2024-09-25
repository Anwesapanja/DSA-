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
void create1st_node(void);
void create2nd_node(void);
void display1st_node(void);
void display2nd_node(void);
void swap_node(void);

void main()
{
    int choice;
    do
    {
     printf("\n\n 1.....creat1st node");
     printf("\n\n 2......create2nd node");
     printf("\n\n 3.....display1st node");
     printf("\n\n 4.....display2nd node");
     printf("\n\n 5......swapping"); 
     printf("\n\n\nenter your choice");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:create1st_node();
              break;
        case 2:create2nd_node();
             break;
        case 3:display1st_node();
            break;
        case 4:display2nd_node();
             break;
        case 5:swap_node();
            break;
        case 6:exit(0);
            break;
        default:printf("\n\nwrong choice");                           
     }  /* code */
    } while ((choice>=1)&&(choice<=6)) ;       
} //end of main()
   void create1st_node(void)
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
   void create2nd_node(void)
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
   void display1st_node(void)
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
                val1=p->info;
                printf("\n %d",val1);
                p=p->next;
            }
        }
   }
   void display2nd_node(void)
   {
    node p;
        p=root2;
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
                val2=p->info;
                printf("\n %d",val2);
                p=p->next;
            }
        }
   }
   void swap_node(void)
   {
    int count1, count2;
    count1=count2=0;
    node p=root1;
    node q=root2;
    while (p)
    {
        count1++;
        //count2++;
        p=p->next;
       // q=q->next;
    }
    while (q)
    {
       // count1++;
        count2++;
       // p=p->next;
        q=q->next;
    }
    p= root1;
    q=root2;
    printf("\n\n1st list %d and 2nd list %d", count1,count2);
    if(count1==count2)
    {
        int i=1;
        while(i<=count1)
        {
        val1=p->info;
        //val2=q->info;
        p->info=q->info;
        q->info=val1;
        p=p->next;
        q=q->next;
        i++;
        }
    }     
    p=root1;
    printf("\n after swapping 1st list\n");
    while(p)
    {

        val2=p->info;
        printf("\n\n %d",val2);
        p=p->next;
       // val1=q->info;
       // printf("\n\n after swapping q %d",val1);
        //q=q->next;
    } 
    printf("\n after swapping 2nd list\n");
    q=root2;
    while(q)
    {

       // val2=p->info;
       // printf("\n\n after swapping p %d",val2);
       // p=p->next;
        val1=q->info;
        printf("\n %d",val1);
        q=q->next;
    } 
   }