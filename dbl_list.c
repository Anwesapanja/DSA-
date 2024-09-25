#include<stdio.h>
//#include<malloc.h>
#include<stdlib.h>
struct dub_list
{
    int info;
    struct dub_list* prev;
    struct dub_list* next;
};
typedef struct dub_list* node;
node root,temp,current;
int val;
void create_node(void);
void display_1sttime(void);
void display_2ndtime(void);
void delete_any_posi(void);
void delete(void);
void insert_any_posi(void);

int main()
{
    int choice;
    do
    {
      printf("\n\n 1....create node");
      printf("\n\n2.....display left to right");
      printf("\n\n 3......display right to left");
      printf("\n\n 4.....delete at any position");
      printf("\n\n 5.....delete node");
      printf("\n\n 6....insert at any position");
      printf("\n\n\n enter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1: create_node();
        break;
        case 2:display_1sttime();
        break;
        case 3:display_2ndtime();
        break;
        case 4:delete_any_posi();
        break;
        case 5:delete();
        break;
        case 6:insert_any_posi();
        break;
        case 7:exit(0);
        break;
        default:printf("\n\n wrong choice");
      }  /* code */
    } while ((choice>=1)&&(choice<=6));
    return 0;
}
void create_node(void)
{
  if(root==NULL)
  {
    root=(node)(malloc(sizeof(struct dub_list)));
    printf("Enter the value for the list1");
    scanf("%d",&val);
    root->info=val;
    root->prev=NULL;
    root->next=NULL;
    current=root;
  }
  else
  {
    temp=(node)(malloc(sizeof(struct dub_list)));
    printf("\n Enter value");
    scanf("%d",&val);
    temp->info=val;
    temp->prev=NULL;
    temp->next=NULL;
    current->next=temp;
    temp->prev=current;
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
void insert_any_posi(void)
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
  printf("total node is %d",count);
  printf("\n\nenter the position you want to insert");
  scanf("%d",&n);
  p=root;
  for(int i=1;i<n-1;i++)
  {
    p=p->next;
  }
  q=p->next;
  temp=(node)(malloc(sizeof(struct dub_list)));
  printf("insert the new value: ");
  scanf("%d",&val);
  temp->info=val;
  temp->prev=p;
  //temp->next=p->next;
  p->next=temp;
  temp->next=q;
  q->prev=temp;
}

void delete_any_posi(void)
{
   int n,count;
   count=0;
   node p=root;
   node q=p->next;
   while(p)
   {
    count++;
    p=p->next;
   }
   printf("the number of nodes:%d",count);
   printf("\n\n what node u want to delete");
   scanf("%d",&n);
   p=root;
   for(int i=1;i<n-1;i++)
   {
    p=p->next;
    q=q->next;
   }
   p->next=q->next;
   (q->next)->prev=p;
   q->prev=NULL;
   q->next=NULL;
   free(q);
}
void delete(void)
{
  node p=root;
  if(root==NULL)
  {
    printf("empty\n\n");
    return;
  }
  //node p=root;
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



