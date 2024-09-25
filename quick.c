#include<stdio.h>
void print(int arr[],int n);
void sort(int a[],int start,int end);
int partition(int a[],int start,int end);

int arr[10];
int n;
void main()
{
    printf("\n\n enter size");
    scanf("%d",&n);
    printf("the value of array will be: ");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    sort(arr,n);
    print(arr,n);
    
}



