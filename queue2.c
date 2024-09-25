//queue 
// REAR -> [ 5 4 3 2 1 ] -> FRONT
            //QUEUE

//header file
#include <stdio.h>

//function to insert element to rear
void enqueue(int value, int *array, int *rear, int *front, int size){
    //checking if queue is full or not
    if(*rear == (size - 1)){
        printf("\nQueue is full\n");
    } else {
        //if not full and empty then sets front to zero
        if(*rear == -1)
            *front = 0;

        //stores the value while incrementing the rear
        array[++(*rear)] = value;
        printf("\nValue added to Queue %d\n", array[(*rear)]);
    }
}

//function to remove element from front
void dequeue(int *front, int *rear, int *array){
    //checking if queue is empty or not
    if(*rear == -1){
        printf("\nQueue is already empty\n");
    }
    else {
        //copies the value we are going to remove
        int tmp = array[*front];

        //loops to shift the entire queue to left
        for(int i = *front; i < *rear; i++){
            array[i] = array [i+1];
        }

        //decrementing the rear
        --(*rear);
        printf("\nValue %d removed from Queue\n", tmp);
    }
}

//function to print elments of the queue
void display(int *array, int rear, int front){
    //checking if queue is empty or not
    if(rear == -1){
        printf("\nQueue is empty\n");
    }else{
        //looping from rear to front to print all elements
        printf("\nElements in Queue--\n");
        printf("REAR - [ ");
        for(int i = rear; i >= front; i--){
            printf("%d ", array[i]);
        }

        puts("] - FRONT");
    }
}

int main(){
    //main function
    //variables
    int size;
    int front = -1;
    int rear = -1;
    int value;

    //size of the queue
    printf("Enter size of the queue: ");
    scanf("%d", &size);

    //allocating the static array
    int array[size];
    int choice;

//jump statement
repeat:

    //options
    puts("Enter task to perform---");
    puts("1. Enqueue\t2. Dequeue");
    puts("3. Display\t4. Exit");
    printf(":-");
    scanf("%d", &choice);

    //calling functions based on chosen option
    switch(choice){
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value, array, &rear, &front, size);
            goto repeat;

        case 2:
            dequeue(&front, &rear, array);
            goto repeat;

        case 3:
            display(array, rear, front);
            goto repeat;

        case 4:
            return 0;

        default:
            puts("Wrong choice!");
            goto repeat;
    }

    return 0;
}