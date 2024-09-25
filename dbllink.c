#include<stdio.h>
#include<stdlib.h>

struct dub_list
{
    int info;
    struct dub_list* prev;
    struct dub_list* next;
};

typedef struct dub_list* node;

//root ar current er jaigai front, rear use kora ta better hobe
node root,temp,current;
int val;

void create_node(void);
void display_1sttime(void);
void display_2ndtime(void);

//void main use korbi na, int use korbi
int main()
{
    int choice;

    do
    {
        printf("\n1. Insert");
        printf("\n2. Display [Left to Right]");
        printf("\n3. Display [Right to Left]");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                create_node();
                break;

            case 2:
                display_1sttime();
                break;

            case 3:
                display_2ndtime();
                break;

            case 4:
                exit(0);

            default:
                printf("\n\n wrong choice");
        }  /* code */
    } while ((choice>=1)&&(choice<=4));

    return 0;
}

void create_node(void)
{
    //ekhane  = diyechis == er jaigai
    if(root==NULL)
    {
        root=(node)(malloc(sizeof(struct dub_list)));
        printf("Enter the value for the list1: ");
        scanf("%d",&val);
        root->info=val;
        root->prev=NULL;
        root->next=NULL;
        current=root;
    }
    else
    {
        temp=(node)(malloc(sizeof(struct dub_list)));
        printf("\n Enter value: ");
        scanf("%d",&val);
        temp->info=val;
        temp->prev=NULL;
        temp->next=NULL;
        current->next=temp;
        temp->prev = current; //previous pointer assign koris ni!!!!!
        current=temp;
    }
}

void display_1sttime(void)
{
    node p;
    p=root;

    if(p==NULL)
    {
        printf("sorry no nodes");
        return;
    }
    else
    {
        printf("1st list values left to right  will be: ");
        while(p)
        {
            val=p->info;
            printf("%d ",val);
            p=p->next;
        }
    }
}
void display_2ndtime(void)
{
    node p;
    p=current;

    if(p==NULL)
    {
        printf("sorry no values");
        return;
    }
    else
    {
        printf("2nd list values right to left will be: ");
        while(p)
        {
            val=p->info;
            printf("%d ",val);
            p=p->prev;
        }
    }
}