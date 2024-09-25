#include<stdio.h>
int bconverter(int n){
	int c=0,i;
	for(i=1;n>0;c=(n%2)*i+c,n=n/2,i=i*10);
	return c;
	}
void bsum(int n,int m){
	int i=1,cin=0,s=0,sum=0;
	printf("The binary sum of %d and %d is ",n,m);
	while((n!=0)||(m!=0)){
		s=(n%10)+(m%10)+cin;
		cin=s/2;
		sum=(s%2)*i+sum;
		n=n/10;
		m=m/10;
		i=i*10;
	}if(cin==1) sum=i+sum;
	printf("%d",sum);
}
   int main(){
	int x,y;
	printf("Enter two decimal numbers: ");
	scanf("%d%d",&x,&y);
	printf("%d = %d\n",x,bconverter(x));
	printf("%d = %d\n",y,bconverter(y));
	bsum(bconverter(x),bconverter(y));
    return 0;

}