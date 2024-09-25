#include<stdio.h>
int main()
{
    int A[100],i,j,k,n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the element of the :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(A[i]==A[j])
            {
                for(k=j;k<n-1;k++)
                {
                    A[k]=A[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }

        }
    }
    printf("the result array will be: ");
    for(i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }

}