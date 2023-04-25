#include <stdio.h>
main()
{
  int a, b, c,x;
  printf("Enter value of a,b,c: ");
  scanf("%d %d %d", &a,&b,&c);
  x=(a*a*a)-(b*b*b)-(c*c*c)-3*b*(a*a)+3*a*(b*b)-3*c*(b*b)-3*b*(c*c)-3*c*(a*a)+6*a*b*c;
 printf("%d",x);
}
