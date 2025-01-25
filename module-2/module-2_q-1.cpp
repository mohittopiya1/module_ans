// MODULE: 2 (C Language - Fundamentals)

// Write a program to make a square and cube of number.


#include<stdio.h>

int main()

{

	int n,sq,cb;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	sq = n * n;
	cb = n * n * n;
	
	printf("the square of number is: %d",sq);
	printf("\nthe cube of number is: %d",cb);
	return 0;
	
}
