// Write a program to print the number in reverse order. 

#include <stdio.h>

int main() 
{
    int num,sum=0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
	{
        remainder = num % 10; 
        sum += remainder;
		num /= 10;  
    }
    
    printf("sum of all digits in the number: %d",sum);

    return 0;
}

