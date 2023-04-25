#include<stdio.h>
main(){
	int a,b,c;
	printf("enter the value of a,b:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d ,b=%d",a,b);
}
