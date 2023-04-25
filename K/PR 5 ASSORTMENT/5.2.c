#include <stdio.h>
main()
{
    int i, n, sum=0, a[i];
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of all elements of array = %d", sum);
}
