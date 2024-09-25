#include<stdio.h>
#include<stdlib.h>

struct cir_list
{
    int info;
    //struct cir_list* prev;
    struct cir_list* next;
};
typedef struct cir_list* node;
node root,temp,current;
int val;

void create_node(void);
void display(void);
void beg_delete(void);
void end_delete(void);
void beg_insert(void);
void end_insert(void);
int main()
{
    int choice=0;
    do
    {
      printf("\n\n 1....create");
      printf("\n\n 2...display");
      printf("\n\n 3....beg_delete");
      printf("\n\n4.....end delete ");
      printf("\n\n 5...beg insert");
      printf("\n\n 6....end insert ");
      printf("\n\n 7...exit");
      printf("\n\n enter a choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:create_node();
        break;
        case 2:display();
        break;
        case 3:beg_delete();
        break;
        case 4:end_delete();
        break;
        case 5:beg_insert();
        break;
        case 6:end_insert();
        break; 
        case 7: exit(0);
        break;
      }  /* code */
    } while ((choice>=1)&&(choice<=7));
}
void create_node(void)
{
    if(root==NULL)
    {
        root=(node)(malloc(sizeof(struct cir_list)));
        printf("enter the value for list");
        scanf("%d",&val);
        root->info=val;
        root->next=NULL;
        current=root;
    }
    else
    {
    temp=(node)(malloc(sizeof(struct cir_list)));
    printf("enter the value");
    scanf("%d",&val);
    temp->info=val;
    temp->next=root;
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
            printf("the values are: ");
            val=p->info;
            printf("%d",val);
            
            p=p->next;
            //printf("\n values are");
            while(p!=root)
            {
                val=p->info;
                printf("\n %d",val);
                p=p->next;
            }
        }
}
void beg_delete(void)
{
    node p=root;
    current->next=p->next;
    root=root->next;
    free(p);
}
void end_delete(void)
{
    node p=root;
    if(p->next)
    {
    while(p->next->next !=root)
    {
        p=p->next;
    }
    node q;
    q=p->next;
    p->next=q->next;
    current=p;
    free(q);
    }
}
void beg_insert(void)
{
    temp=(node)(malloc(sizeof(struct cir_list)));
    printf("enter a value");
    scanf("%d",&val);
    temp->info=val;
    current->next=temp;
    temp->next=root;
    root=temp;
}
void end_insert(void)
{
    temp=(node)(malloc(sizeof(struct cir_list)));
    printf("enter the value");
    scanf("%d",&val);
    temp->info=val;
    temp->next=root;
    current->next=temp;
    current=temp;
}
