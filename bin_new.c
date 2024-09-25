#include<stdio.h>
int main()
{
    int n,a[10],low,mid,high,key;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the choice: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=((high+low)/2);
    while(low<=high)
    {
        if(a[mid]<key)
        {
            low=mid+1;
        }
        else if (a[mid]==key)
        {
          printf("%d is found at the location %d ", key, mid+1);  
          break;
        }
        else
        high=mid-1;
        mid=((low+high)/2);
        
    }
    if(low>high)
    {
        printf("NOT FOUND");
    }
    return 0;
}