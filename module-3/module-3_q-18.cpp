// Write program to make an addition of two number using pointer

#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("enter 1st number:");
	scanf("%d",&n1);
	printf("enter 2nd number:");
	scanf("%d",&n2);
	
	int *ptr1 = &n1;
    int *ptr2 = &n2;
	int sum = *ptr1 + *ptr2;
	
	printf("sum of both number is: %d",sum);	
}
