#include<stdio.h>
//#include<malloc.h>
#include<stdlib.h>
 
struct poly
{
    int coeff;
    int data;
    int power;
    struct poly* next;
};
typedef struct poly* node;
node root1,root2,root3,temp1,temp2,temp3,current1,current2,current3;
int coeff1,coeff2,coeff3,power1,power2,power3;
void create_1st_node(void);
void create_2nd_node(void);
void display_1st_list(void);
void display_2nd_list(void);
void sum_list(void);
void display_sum_list(void);

void main()
{
    int choice;
    do
    {
      printf("\n\n 1.....crete 1st node");
      printf("\n\n 2.....crete 2nd node");
      printf("\n\n 3......display  1st list");
      printf("\n\n 4......display 2nd list ");
      printf("\n\n 5.....sum two list");
      printf("\n\n 6.....display the sum list");
      printf("\n\n 7......exit");
      printf("\n\n\n enter your choice");
      scanf("%d",&choice); 
      switch(choice)
      {
        case 1:create_1st_node();
               break;
        case 2: create_2nd_node();
              break;
        case 3: display_1st_list();
             break;
        case 4: display_2nd_list();
             break;
        case 5:sum_list();
             break;
        case 6:display_sum_list();
             break;
        case 7:exit(0);
             break;
        default:printf("\n\n wrong choice");                                      
      }      /* code */
    } while ((choice>=1)&&(choice<=7));
} //end of main()
 void create_1st_node(void)
 {
    if(root1==NULL)
    {
        root1=(node)(malloc(sizeof(struct poly)));
        printf("enter the coeff and power for 1st list");
        scanf("%d %d",&coeff1,&power1);
        root1->coeff=coeff1;
        root1->power=power1;
        root1->next=NULL;
        current1=root1;
    }
    else
    {
        temp1=(node)(malloc(sizeof(struct poly)));
        printf("\n enter the coeff and power for the 1st list");
        scanf("%d %d",&coeff1,&power1);
        temp1->coeff=coeff1;
        temp1->power=power1;
        temp1->next=NULL;
        current1->next=temp1;
        current1=temp1;
    }
 }
 void display_1st_list(void)
 {
    node p;
    p=root1;
    if(p==NULL)
    {
        printf("sorry no nodes");
        return;
    }
    else
    {
    printf("\n\n the coeff and power will be: ");
    while(p)
    {
        coeff1=p->coeff;
        power1=p->power;
        printf("\n %d %d ", coeff1,power1);
        p=p->next;
    }
    }
 }     
 void create_2nd_node(void)
 {
    if(root2==NULL)
    {
        root2=(node)(malloc(sizeof(struct poly)));
        printf("enter the coeff and power for the 2nd list");
        scanf("%d %d",&coeff2,&power2);
        root2->coeff=coeff2;
        root2->power=power2;
        root2->next=NULL;
        current2=root2;
    }
    else
    {
        temp2=(node)(malloc(sizeof(struct poly)));
        printf("enter the coeff and power for the 2nd list");
        scanf("%d %d",&coeff2,&power2);
        temp2->coeff=coeff2;
        temp2->power=power2;
        temp2->next=NULL;
        current2->next=temp2;
        current2=temp2;
    }
 }
 void display_2nd_list(void)
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
    printf("the coeff and the power will be: ");
    while(p)
    {
        coeff2=p->coeff;
        power2=p->power;
        printf("\n%d %d",coeff2,power2);
        p=p->next;
    }    
   }
 }
 void sum_list(void)
 {
   node p=root1;
   node q=root2;
   //node temp3=root3;
   int count1,count2;
   count1=0;
   count2=0;
   while(p)
   {
     count1++;
     p=p->next;
   }
   printf("\n\ntotal node in the 1st list %d",count1);
   while(q)
   {
    count2++;
    q=q->next;
   }
   printf("\n\n total node in the 2nd list %d",count2);
   int tem=0;
   if (count1>count2)
   {
     tem=count1;
   }
   else
   tem=count2;
   printf("%d", tem);
   p=root1;
   q=root2;
   int i;
   for(i=1;i<=tem;i++)
  { 
   if(root3==NULL)
   {
    if((p->power)==(q->power))
    {
    root3=(node)(malloc(sizeof(struct poly)));
     root3->coeff=((p->coeff)+(q->coeff));
     root3->power=p->power;
     root3->next=NULL;
     //current3->next=temp3;
     current3=root3;
     p=p->next;
     q=q->next;
    }
   else if ((p->power)>(q->power))
    {
      root3=(node)(malloc(sizeof(struct poly)));
     root3->coeff=p->coeff;
     root3->power=p->power;
     root3->next=NULL;
     //current3->next=temp3;
     current3=root3;
     p=p->next;
    }
    else
    {
      root3=(node)(malloc(sizeof(struct poly)));
     root3->coeff=q->coeff;
     root3->power=q->power;
     root3->next=NULL;
     //current3->next=temp3;
     current3=root3;
     q=q->next;
    }
   }
   else
   {
   if((p->power)==(q->power))
   {
     temp3=(node)(malloc(sizeof(struct poly)));
     temp3->coeff=((p->coeff)+(q->coeff));
     temp3->power=p->power;
     temp3->next=NULL;
     current3->next=temp3;
     current3=temp3;
     p=p->next;
     q=q->next;
   }
   else if((p->power)>(q->power))
   {
     temp3=(node)(malloc(sizeof(struct poly)));
     temp3->coeff=p->coeff;
     temp3->power=p->power;
     temp3->next=NULL;
     current3->next=temp3;
     current3=temp3;
     p=p->next;
   }
   else
   {
    temp3=(node)(malloc(sizeof(struct poly)));
    temp3->coeff=q->coeff;
    temp3->power=q->power;
    temp3->next=NULL;
    current3->next=temp3;
    current3=temp3;
    q=q->next;
   }
 }
  }
 }
 void display_sum_list(void)
 {
   node p=root3;
   if(p==NULL)
   {
    printf("sorry no nodes");
    return;
   }
   else
   {
    printf("\n values are: ");
    while(p)
    {
        coeff3=p->coeff;
        power3=p->power;
        printf("\n%d %d",coeff3,power3);
        p=p->next;
    }    
   }
 }

