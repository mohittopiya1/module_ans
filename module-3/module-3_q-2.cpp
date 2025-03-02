// write a program to check the given number is prime or not.Write a program make a summation of given number(E.g. 1523 ans :-11) 

#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
	{
        printf("Not a prime number.\n");
        return 0;
    }

    for (n = 2; n < num; n++)
	{
        if (num % n == 0) 
		{
            printf("Not a prime number.\n");
            return 0;
        }
    }
    printf("Prime number.\n");
    return 0;
}

