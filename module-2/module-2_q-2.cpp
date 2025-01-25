// MODULE - 2 QUES -2

#include<stdio.h>
#include<math.h>
int main()
 
{
	int p,t;
	float si,ci,r,n;
	
	printf("enter principle amount: ");
	scanf("%d",&p);
	printf("enter time period: ");
	scanf("%d",&t);
	printf("enter rate of interest: ");
	scanf("%f",&r);
	printf("enter no. of time interest is compounded for compound interest: ");
	scanf("%f",&n);
    
    si = (p * t * r)/100;
	ci = p * pow((1 + (r / (n * 100))), (n * t));
	
	printf("simple interest is: %f",si);
	printf("\ncompound interest is: %f",ci);
}
