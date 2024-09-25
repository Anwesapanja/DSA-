#include<stdio.h>
#include<stdlib.h>

struct list
{
    int info;
    struct list* next; 
};
typedef struct list* node;
node root,current,temp;
int val;

void create_node(void);
void delete(void);
void display(void);
void beg_insert(void);
void end_insert(void);
void mid_insert(void);
void beg_delete(void);
void mid_delete(void);
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
        case 8:delete();
           break;
        case 9:exit(0);
          break;               
        default: printf("\n wrong choice");                      
      }  
    } while ((choice>=1) && (choice<=8));
} //end of main()

void create_node(void)
{
    if(root==NULL)
    {
        root=(node)(malloc(sizeof(struct list)));
        printf("enter a value");
        scanf("%d",&val);
        root->info=val;
        root->next=NULL;
        current=root;
    }
    else
    {
        temp=(node)(malloc(sizeof(struct list)));
        printf("enter a value");
        scanf("%d",&val);
        temp->info=val;
        temp->next=NULL;
        current->next=temp;
        current=temp;
    }
}
void delete(void)
{
    if (root==NULL)
    {
        printf("no nodes!!");
    }
    node p;
    node tmp;
    p=root;
   if(p->next)
    {
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        tmp=p->next;
        p->next=NULL;
        free(tmp);
    }

}
void display(void)
{
  node  p=root;
    if(root==NULL)
    {
        printf("empty");
    }
    else
    {
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
    printf("enter the value: ");
    scanf("%d",&val);
    temp->info=val;
    temp->next=root;
    root=temp;
}
void end_insert(void)
{
    temp=(node)(malloc(sizeof(struct list)));
    printf("enter a value");
    scanf("%d",&val);
    temp->info =val;
    current->next=temp;
    temp->next=NULL;
    
}
void mid_insert(void)
{
    node p=root;
    int count=0;
    node q;
    while(p)
    {
        count++;
        p=p->next;
    }
    printf("the number if node will be: %d",count);
    int n;
    printf("\n\n choose the position u want to insert: ");
    scanf("%d",&n);
    //p=root;
    if(n>count)
    {
        printf("Not possible");
        exit(0);
    }  
   /* if(n==1)
    {
        beg_insert();
    } */
        p=root;
        for(int i=1;i<n-1;i++)
        {
            p=p->next;
        }
        q=p->next;
          temp=(node)(malloc(sizeof(struct list)));
          printf("enter the value");
          scanf("%d",&val);
        temp->info=val;
        p->next=temp;
        temp->next=q;
}  
void beg_delete(void) 
{
    node p=root;
    root=root->next;
    free(p);
}        
void mid_delete(void)
{
    int count=0;
    node p=root;
    int n;
    node q;
    while(p)
    {
        count++;
        p=p->next;
    }
    printf("the number of the nodes will be:%d",count);
    printf("choose the node what u delete: ");
    scanf("%d",&n);
    p=root;
    if(n>count)
    {
        printf("Not possible");

    }
    else
    {
       for(int i=1;i<n-1;i++)
       {
         p=p->next;
       }
       q=p->next;
       p->next=q->next;
       free(q);
    }

}



