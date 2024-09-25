#include<stdio.h>

void decimal2bit(int n);
void onecomplement (void);
int A[8];
//int deci;

int main()
{
    int n;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
     decimal2bit (n);
     onecomplement();
    return 0;
}
void decimal2bit(int n)
{
    int i, B[8];
    for(i=0;n>0;i++)
    {
        A[i]=n%2;
        n=n/2;
    }
    printf("the binary number will be: ");
    for(i=8-1;i>=0;i--)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void onecomplement(void)
{
    int i;
    for(i=0;i<8;)    
    {
        if(A[i]==0)
        {
            A[i]=1;
            i++;
        }
        else
        {
            A[i]=0;
            i++;
        }
    }
    printf("the one complement will be: ");
    for(i=0;i<8;i++)
    {
        printf("%d\n", A[i]);
    }
}
