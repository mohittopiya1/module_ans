// Write a program to find out the factorial of given number using function. 

#include<stdio.h>

int fact(int n)
{
	if (n==0 || n<0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else 
	{
	int factorial = n * fact(n-1);
	return factorial;
    }
}

int main()
{
	int n;
	printf("enter no. upto which you want to find factorial:");
	scanf("%d",&n);
	printf("factorial of %d number is: %d",n,fact(n));
	return 0;
}
