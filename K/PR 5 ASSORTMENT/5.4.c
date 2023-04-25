#include<stdio.h>
main()
{
int a[50][50],i,j,row,col;
int b[50][50];
printf("enter number of rows:-");
scanf("%d",&row);
printf("enter number of column:-");
scanf("%d",&col);

for(i=0; i<row ;i++){
for(j=0; j<col ;j++){
	scanf("%d",&a[i][j]);
}	
}
printf("all matrix print \n");
for(i=0; i<row ;i++){
for(j=0; j<col ;j++){
	printf("%d",a[i][j]);
}
printf("\n");	

}

printf("enter number of rows:-");
scanf("%d",&row);
printf("enter number of column:-");
scanf("%d",&col);

for(i=0; i<row ;i++){
for(j=0; j<col ;j++){
	scanf("%d",&b[i][j]);
}	
}
printf("all matrix print \n");
for(i=0; i<row ;i++){
for(j=0; j<col ;j++){
	printf("%d",b[i][j]);
}

printf("\n");	

}
printf("sum of two matrix \n");
for(i=0; i<row ;i++){
for(j=0; j<col ;j++){
	printf("%d",a[i][j] + b[i][j]);
}
}
}


