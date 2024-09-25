#include<stdio.h>
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
void display_addnode(void);
int check_length(void);

void main()
{
    int choice;
    do
    {
     printf("\n\n 1.....creat1st node");
     printf("\n\n 2......create2nd node");
     printf("\n\n 3.....display1st node");
     printf("\n\n 4.....display2nd node");
     printf("\n\n 5......sum_two_node"); 
     printf("\n\n 6......diplay_added_nodes");
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
        case 6:display_addnode();
              break;    
        case 7:exit(0);
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
        scanf("%d",&val1);
        root1->info=val1;
        root1->next=NULL;
        current1=root1;
    }
    else
    {
        temp1=(node)(malloc(sizeof(struct list)));
        printf("\n Enter value");
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
        printf("Enter the value for list");
        scanf("%d",&val2);
        root2->info=val2;
        root2->next=NULL;
        current2=root2;
    }
    else
    {
        temp2=(node)(malloc(sizeof(struct list)));
        printf("\n enter value");
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
        printf("Sorry no nodes");
        return;
    }
    else
    {
        printf(" 1st node the values will be:");
        while(p)
        {
            val1=p->info;
            printf("%d ",val1);
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
        printf("sorry no nodes");
        return;
    }
    else
    {
        printf("the 2nd nodes value will be: ");
        while(p)
        {
            val2=p->info;
            printf("\n %d" ,val2);
            p=p->next;
        }
    }
}
void sum_node(void)
{
      int ch=check_length();
      if(ch==1)
      {
        node p=root1;
        node q=root2;
        while(p&&q)
        {   
        if(root3==NULL)
        {
        root3=(node)(malloc(sizeof(struct list)));
        root3->info=((p->info)+(q->info));
        root3->info=val3;
        root3->next=NULL;
        current3=root3;
        }  
        else
        {
         temp3=(node)(malloc(sizeof(struct list)));
         temp3->info=((p->info)+(q->info));
         temp3->info=val3;
         temp3->next=NULL;
         current3->next=temp3;
         current3=temp3;
        }
         p=p->next;
         q=q->next;
        }
        }  
}          
int check_length(void)
{
    node p=root1;
    node q=root2;
    int len1,len2;
    len1=0;
    while(p)
    {
        len1++;
        p=p->next;
    }
    len2=0;
    while(q)
    {
        len2++;
        q=q->next;
    }
    if(len1==len2)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
void display_addnode(void)
{
    node p;
    p=root3;
    if(p==NULL)
    {
        printf("Sorry no,nodes");
        return;
    }
    else
    {
        printf("\n values are: ");
        while(p)
        {
          val3=p->info;
          printf("\n\n%d",val3);
          p=p->next;
        }
    }
}
