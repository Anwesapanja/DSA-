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
void beg_insert(void);
void mid_insert(void);
void end_insert(void);
void beg_delete(void);
void mid_delete(void);
void end_delete(void);


void main()
{
    int choice;
    do
    {
      printf("\n\n 1.....create");
      printf("\n\n2.....display");
      printf("\n\n3.....beg_insert");
      printf("\n\n4.....mid_insert");
      printf("\n\n5.....end_insert");
      printf("\n\n6......beg_delete");
      printf("\n\n7......mid_delete");
      printf("\n\n8.....end_delete");
      printf("\n\n9........exit");
      printf("\n\n\nenter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1: create_node();
               break;
        case 2: display();
            break;
        case 3:beg_insert();
             break;
        case 4:mid_insert(); 
            break;
        case 5:end_insert();
            break;
        case 6:beg_delete();
            break;
       case 7:mid_delete();
            break;
        case 8:end_delete();
           break;
        case 9:exit(0);
          break;               
        default: printf("\n wrong choice");                      
      }  
    } while ((choice>=1) && (choice<=9));
} //end of main()    
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

    void beg_insert(void)
    {
        temp=(node)(malloc(sizeof(struct list)));
        printf("enter the value");
        scanf("%d",&val);
        temp->info=val;
        temp->next=root;
        root=temp;
    }
    void end_insert(void)
    {
        temp=(node)(malloc(sizeof(struct list)));
        printf("enter the value");
        scanf("%d",&val);
        temp->info=val;
        current->next=temp;
        temp->next=NULL;
    }

    void beg_delete(void)
    {
        node p;
        p=root;
        root=root->next;
        free(p);
    }

void end_delete(void)
{
    if(root == NULL){
        printf("Empty\n");
        return;
    }

    node p=root;
    node tmp;

    if(p->next){
        while(p->next->next != NULL){
            p = p->next;
        }

        tmp = p->next;
        p->next = NULL;
        free(tmp);
    }
}
void mid_insert(void)
{    
   // node p=root;
    int count=0;
    int n;
    node p=root;
    //int count=0;
    node q=p;
    //node q=current;
    while(p)
    {
        count++;
        p=p->next;
    }
    printf("Total node is %d", count);
    printf("Enter the position you want to insert");
    scanf("%d",&n);
    if(n>count)
    {
       printf("Sorry! cannot insert, length extend");  
       exit(0);
    } 
    p=root;   
    for(int i=1;i<n-1;i++)
    {
        p=p->next;
        
    }
    q=p->next;
    temp=(node)(malloc(sizeof(struct list)));
     printf("enter the value: ");
     scanf("%d",&val);
     temp->info=val;
     //p->next=temp;
     temp->next=q;
     p->next=temp;
    
}
void mid_delete(void)
{
   node p=root;
    int count=0;
    node q=p->next;
    int n;
    while(p)
    {
        count++;
        p=p->next;
    }
    printf("Enter the position you want to delete");
    scanf("%d",&n);
    if(n>count)
    {
       printf("Sorry! cannot insert, length extend");  
       exit(0);
    } 
    if(n==1)
    {
     beg_delete();
     return;  
    }   
    p=root;
    //count=1;
    //while(count>n)
   // {
      for(int i=1;i<n-1;i++)
      {
        p=p->next;
        q=q->next;
      }  
    p->next=q->next;
    q->next=NULL;
    free(q); 
    
}       
