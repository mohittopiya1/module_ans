// write a program to check the given year is leap year or not

#include <stdio.h>

int main() 

{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) 
	{
        printf("Entered year is a leap year.\n");
    } 
	else if (year % 100 == 0) 
	{
        printf("Entered year is not a leap year.\n");
    } 
	else if (year % 4 == 0) 
	{
        printf("Entered year is a leap year.\n");
    } 
	else 
	{
        printf("Entered year is not a leap year.\n");
    }

    return 0;
}

