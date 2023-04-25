#include<stdio.h>
int main(){
int a[50]={10,9,8,7,6,5,4,3,2,1} ,n=10;

int ans[n],i;

for (i=0;i<n;i++);
{
  ans[i]=a[i];
}
printf("second array copy:-");
for (i=0; i<n; i++);
{
	printf("%d",ans[i]);
}
}
