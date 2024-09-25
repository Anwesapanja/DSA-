#include<stdio.h>
int main(){
    int a[8],b[8],c[8],n,m,n1,m1,i,sum,carry=0;
    printf("Enter two decimal number: ");
    scanf("%d %d",&n,&m);
    n1=n;m1=m;
    for(i=8;i>=0;i--,a[i]=n%2,n=n/2);
	for(i=8;i>=0;i--,b[i]=m%2,m=m/2);
    printf("%d = ",n1);
    for(i=0;i<8;i++) printf("%d",a[i]);
    printf("\n%d = ",m1);
    for(i=0;i<8;i++) printf("%d",b[i]);
 	for(i=7;i>=0;i--){
 		sum=a[i]+b[i]+carry;
		c[i]=sum%2;
		carry=sum/2;
		printf("\n%d\t%d\t%d\t%d\t%d",a[i],b[i],c[i],sum,carry);
	}
	printf("\nSum = ");
	for(i=0;i<8;i++) printf("%d",c[i]);
}