// Write a program you have to print the Fibonacci series up to user given number.

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n, i;

    printf("Enter the value of n (greater than 0) to generate Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) 
	{
        printf("Please enter a value greater than 0.\n");
        return 0; 
    }
   
    if (n == 1) 
	{
        printf("%d\n", a);
    } 
	else 
	{
        printf("%d %d ", a, b); 
        for (i = 2; i < n; i++) 
		{ 
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
    }
    return 0;
}

