#include<stdio.h>
void main()
{
   int n;
    float perimeter,radius; 
    printf(" \n Perimeter of circle \n");
    printf("---------------------------\n");
    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    perimeter = 2 * (22 / 7) * radius;
    printf("Perimeter of circle is: %.3f", perimeter);
 
}
