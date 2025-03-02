// Write a program to find out the max number from given 10 elements of array

#include<stdio.h>
int main()
{
	int num[10],max_value;
	
	for (int i=0; i<10; i++)
	{
		printf("enter number %d :",i+1);
		scanf("%d",&num[i]);
	}
	
	max_value = num[0];
	
	for (int i=0;i<10;i++)
	{
		if (num[i] > max_value)
		{
			max_value = num[i];
		}
	}
	
	printf("%d",max_value);
	return 0;
}
