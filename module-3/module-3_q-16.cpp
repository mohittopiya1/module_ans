// Write a Program of Print a number and check the number is palindrome or not using recursive Function 


#include <stdio.h>

int isPalindromeRecursive(int num, int revNum)
{
    if (num == 0) 
    {
        return revNum;
    }
    
    revNum = (revNum * 10) + (num % 10);  
    return isPalindromeRecursive(num / 10, revNum);
}

int main() 
{
    int num, reversedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversedNum = isPalindromeRecursive(num, 0);
    
    if (num == reversedNum)
    {
        printf("%d is a Palindrome.\n", num);
    }
	else
    {
	printf("%d is not a Palindrome.\n", num);
	}
	
    return 0;
}

