#include <stdio.h>  
void table (int x);  
int main ()  
{  
    int number;  
    printf (" Enter a number to get the table: ");  
    scanf (" %d", &number); 
    printf ("\n The multiplication table of %d \n", number);  
    table (number);
}  
void table (int number)  
{  
    int i; 
    for ( i = 1; i <= 10; i++)  
    {  
        printf (" %d x %d = %d \n", number, i, number * i);  
    }  
}  
