#include<stdio.h>

void swap(int *a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[i]<=pivot)
        {
        i++;
        swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
   if(low<high)
   { int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
   }
}

int main()
{
   int n,arr[10];
   printf("the size will be: ");
   scanf("%d",&n);
   printf("the elements will be: ");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   } 
   quicksort(arr,0,n-1);
   printf("the sorted array will be: ");
   for(int i=0;i<n;i++)
   {
        printf("\n &d",arr[i]);
   }
   return 0;
}


