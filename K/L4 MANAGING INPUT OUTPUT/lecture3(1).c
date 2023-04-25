#include<stdio.h>
main(){
	int a,b,c;
	printf("enter the value of a,b:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("\na=%d ,b=%d",a,b);
}
