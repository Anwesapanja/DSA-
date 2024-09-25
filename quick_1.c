#include<stdio.h>
int main()
{
int n;
printf("enter the size of the array");
scanf("%d",&n);
int A[n];
printf("enter the value of the array ");
for(int i=0;i<n;i++)
{
scanf("%d\n",&A[i]);
}
int pivot;
pivot=A[n-1];
int i,temp1,temp2;
for(i=0;i<n;i++)
{
    if(A[i]>pivot)
    {
        A[i]=A[i]+pivot;
        pivot=A[i]-pivot;
        A[i]=A[i]-pivot;
    
    }
    for(int j=0;j<i;j++)
    {
       for(int k=j+1;k<i;k++)
       {
         if(A[j]>A[k])
         {
           temp1=A[j];
           A[j]=A[k];
           A[k]=temp1;
         }
       }
    }
    for(int j=i+1;j<n;j++)
    {
       for(int k=j+1;k<n;k++)
       {
        if(A[j]>A[k])
        {
            temp2=A[j];
            A[j]=A[k];
            A[k]=temp2;
        }
       }
    }
}
printf("the sorted array will be: ");
for(int i=0;i<n;i++)
{
    printf("%d\n",A[i]);
}
return 0;
}
