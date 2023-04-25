#include <stdio.h>
main(){
   int A[10][10], B[10][10];
   int i, j, R1, C1, R2, C2, m =1;
   printf("Enter the matrix A");
   scanf("%d %d", &R1, &C1);
   printf("Enter thematrix B");
   scanf("%d %d", &R2,&C2);
   printf("Enter the elements of mat");
   for(i=0; i<R1; i++){
      for(j=0; j<C1; j++){
         scanf("%d",&A[i][j]);
      }
   }
   printf("Enter the elements of matrix B");
   for(i=0; i<R2; i++){
      for(j=0; j<C2; j++){
         scanf("%d",&B[i][j]);
      }
   }
   printf("MATRIX A is");
   for(i=0; i<R1; i++){
      for(j=0; j<C1; j++){
         printf("%3d",A[i][j]);
      }
      printf("");
   }
   printf("MATRIX B is");
   for(i=0; i<R2; i++){
      for(j=0; j<C2; j++){
         printf("%3d",B[i][j]);
      }
      printf("\n");
   }

   if(m == 1 )
      printf("Two matrices are equal");
   else
   printf("But,two matrices are not equal");
}
