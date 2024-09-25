#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct list
{
   int info;
   struct list* next;
};
typedef struct list* node;
node root1,root2,root3,temp1,temp2,temp3,current1,current2,current3;
int val1,val2,val3;
void create1st_node(void);
void create2nd_node(void);
void display1st_node(void);
void display2nd_node(void);
void sum_node(void);

void main()
{
    int choice;
    do
    {
     printf("\n\n 1.....creat1st node");
     printf("\n\n 2......create2nd node");
     printf("\n\n 3.....display1st node");
     printf("\n\n 4.....display2nd node");
     printf("\n\n 5......sumtwonode"); 
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
        case 5:sum_node();
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
        printf("Enter the value for list1");
        scanf("%d",val1);
        root1->info=val1;
        root1->next=NULL;
        current1=root1;
    }
    else
    {
        temp1=(node)(malloc(sizeof(struct list)));
        printf("\n Enter value");
        scanf("%d",&val1)
        temp1->info=val1;
        temp2->
    }
}