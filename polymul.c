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
node root1,root2,root3,temp1,temp2,temp3,current1,current3,current2;
int coeff1,coeff2,coeff3,power1,power2,power3;
void create_1st_node(void);
void display_1st_node(void);
void create_2nd_node(void);
void display_2nd_node(void);
void mul_node(void);
void display_mul_list(void);

void main()
{
    int choice;
    do
    {
      printf("\n\n 1...create 1st node");
      printf("\n\n 2.....display 1st node");
      printf("\n\n 3....create 2nd node");
      printf("\n\n 4.....display 2nd node");
      printf("\n\n 5.....mul_node");
      printf("\n\n 6.....display the mul list");
      printf("\n\n 7....exit");
      printf("\n\n\n enter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:create_1st_node();
            break;
        case 2:display_1st_node();
            break;
        case 3:create_2nd_node();
            break;
        case 4:display_2nd_node();
            break;
        case 5:mul_node();
            break;
        case 6:display_mul_list();
            break;        
        case 7:exit(0);
            break; 
        default:printf("\n\n wrong choice");                   
      }  /* code */
    } while ((choice>=1)&&(choice<=5));
}//end of main()

void create_1st_node(void)
{
    if(root1==NULL)
    {
        root1=(node)(malloc(sizeof(struct poly)));
        printf("enter the coeff and power for the list");
        scanf("%d %d",&coeff1,&power1);
        root1->coeff=coeff1;
        root1->power=power1;
        root1->next=NULL;
        current1=root1;
    }
    else
    {
        temp1=(node)(malloc(sizeof(struct poly)));
        printf("\n\n enter the coeff ane power for the list");
        scanf("%d %d",&coeff1,&power1);
        temp1->coeff=coeff1;
        temp1->power=power1;
        temp1->next=NULL;
        current1->next=temp1;
        current1=temp1;
    }
}
void display_1st_node(void)
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
            printf("\n\n %d %d ",coeff1,power1);
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
        scanf("%d %d",&coeff2,power2);
        temp2->coeff=coeff2;
        temp2->power=power2;
        temp2->next=NULL;
        current2->next=temp2;
        current2=temp2;
    }
}
void display_2nd_node(void)
{
    node p=root2;
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
void mul_node(void)
{
    node p=root1;
    node q=root2;
    if(root3==NULL)
    {
        root3=(node)(malloc(sizeof(struct poly)));
        root3->coeff=((p->coeff)*(q->coeff));
        root3->power=((p->power)+(q->power));
        root3->next=NULL;
        current3=root3;
        p=p->next;
        q=q->next;
    }
    else
    {
        temp3=(node)(malloc(sizeof(struct poly)));
        temp3->coeff=((p->coeff)*(q->coeff));
        temp3->power=((p->power)+(q->power));
        temp3->next=NULL;
        current3->next=temp3;
        current3=temp3;
        p=p->next;
        q=q->next;
    }
}    
void display_mul_list(void)
{
node p=root3;
if(p==NULL)
{
    printf("sorry no values");
    return;
}
else
{
    printf("\n\n the values are:  ");
    while(p)
    {
        coeff3=p->coeff;
        power3=p->power;
        printf("\n\n %d %d",coeff3,power3);
        p=p->next;
    }
}
}

