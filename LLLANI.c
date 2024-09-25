#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct List
{
   int info;
    struct List* next;
};

typedef struct List List;

List* head1 = NULL;
List* head2 = NULL; 
List* tmp;
List* end1 = NULL;
List* end2 = NULL;

int val;
void create(List **head, List **rear);
void display(List* head);
void concatenate(List** , List** );

int main()
{
    int choice;

    do{
        printf("\n1. Create First\t2. Create Second\n");
        printf("3. Display First\t4. Display Second\n");
        printf("5. Concatenate\t6.Display Final\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                create(&head1, &end1);
                break;

            case 2:
                create(&head2, &end2);
                break;

            case 3:
                display(head1);
                break;

            case 4:
                display(head2);
                break;

            case 5:
                concatenate(&end1, &head2);
                break;

            case 6:
                display(head1);
                break;

            case 7:
                exit(0);

            default: 
                printf("\nWrong choice\n");
        }
    }while((choice>=1)&&(choice<=6)); 

    return 0;
}

void create(List **head, List **rear)
{
    if(*head == NULL)
    {
        printf("\nHead\n");
        *head = (List* )(malloc(sizeof(List)));
        printf("\nEnter the value: ");
        scanf("%d", &val);
        (*head)->info = val;
        (*head)->next = NULL;
        (*rear) = (*head);
    }
    else
    {
        tmp = (List*)(malloc(sizeof(List)));
        printf("\nEnter the value: ");
        scanf("%d", &val);
        tmp->info = val;
        tmp->next = NULL;
        (*rear)->next = tmp;
        (*rear) = tmp;
    }      
}

void display(List* head)
{
    List* p1 = head;
    if(p1 == NULL)
    {
        printf("Sorry no,Nodes\n");
        // getch();
        return;
    }
    else
    {
        printf("\nValues are:- \n");
        while(p1)
        {
            val = p1->info;
            printf("%d\n", val);
            p1=p1->next;
        }
    }
}

void concatenate(List** end_of_first_list, List** head_of_second_list)
{
   (*end_of_first_list)->next = (*head_of_second_list);
}