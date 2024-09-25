#include<stdio.h>
int main()
{
    int n,m,i,j, A[100],B[100],C[100],carry;
    printf("enter the two numbers to convert: ");
    scanf("%d %d",&n,&m);
    for(i=0;n>0;i++)
    {
        A[i]=n%2;
        n=n/2;
    }
    for(j=0;m>0;j++)
    {
        B[j]=m%2;
        m=m/2;
    }
    printf("1st Binary of given number is: ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d\n",A[i]);
    }
    printf("the 2nd binary given number is:  ");
    for(j=j-1;j>=0;j--)
    {
        printf("%d\n",B[j]);
    }
    carry=0;
    for(i=7;i>=0;i--)
    {
        if(A[i]==0 && B[i]==0 && carry==0);
        {
           C[i]=0;
           carry=0;
        }
         if(A[i]==0 && B[i]==0 && carry==0);
        {
            C[i]=1;
            carry=0;
        }
        if(A[i]==1 && B[i]==1 && carry==0)
        {
            C[i]=0;
            carry=1;
        }
        else
        {
            C[i]=1;
            carry=0;
        }
    }
    printf("the showing array will be: ");
    for(i=0;i<8;i++)
    {
        printf("%d",C[i]);
    }
 return 0;
}    
    
