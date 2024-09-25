#include<stdio.h>
int main()
{
    int A[8],B[8],C[8],D[8],i,j,k,l,n,m,carry=0,E[8];
    printf("enter two decimal number: ");
    scanf("%d %d",&n,&m);
    for(i=0;i<8;i++)
    {
        A[i]=n%2;
        n=n/2;
    }
    for(j=0;j<8;j++)
    {
        B[j]=m%2;
        m=m/2;
    }
    for(i=7,k=0;i>=0,k<8;i--,k++)
    {
        C[k]=A[i];
    }
    for(j=7,l=0;j>=0,l<8;j--,l++)
    {
        D[l]=B[j];
    }
    printf("the 1st decimal number will be: ");
    for(i=0;i<8;i++)
    {
        printf("%d\n",C[i]);
    }
    printf("the 2nd decimal number will be: ");
    for(j=0;j<8;j++)
    {
        printf("%d\n",D[j]);
    }
   // int carry=0,E[8];
    for(i=7;i>=0;i--)
    {
        if(C[i]==0 && D[i]==0 && carry==0)
        {
            E[i]=0;
            carry=0;
        }
        if(C[i]==0 && D[i]==1 && carry==0)
        {
            E[i]=1;
            carry=0;
        }
        if(C[i]==1 && D[i]==0 && carry==0)
        {
            E[i]=1;
            carry=0;
        }
        if(C[i]==1 && D[i]==1 && carry==0)
        {
            E[i]=0;
            carry=1;
        }
        if(C[i]==0 && D[i]==0 && carry==1)
        {
            E[i]=1;
            carry=0;
        }
        if(C[i]==1 && D[i]==0 && carry==1)
        {
            E[i]=0;
            carry=1;
        }
        if(C[i]==0 && D[i]==1 && carry==1)
        {
            E[i]=0;
            carry=1;
        }
        else
        {
            E[i]=0;
            carry=1;
        }
    }
    printf("the result  will be: ");
    for(i=0;i<8;i++)
    {
        printf("%d\n",E[i]);
    }
    return 0;
}    
    
