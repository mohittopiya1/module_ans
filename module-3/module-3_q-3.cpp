// write a program user enter the 5 subjects marks. you have to make a total and find the percentage.
// a) percentage > 75 you have to print “Distinction”
// b) percentage > 60 and percentage <= 75 you have to print “First class”
// c) percentage >50 and percentage <= 60 you have to print “Second class”
// d) percentage > 35 and percentage <= 50 you have to print “Pass class”
// e) Otherwise print “Fail” 

#include<stdio.h>

int main()
{   
    int marks[5],total;
    float percentage;
    for (int i = 0;i<5;i++)
    {
    	printf("enter marks out of 100 of subject %d :",i+1);
    	scanf("%d",&marks[i]);
    	
    	if (marks[i] < 0 || marks[i] > 100)
    	{
    		printf("marks should be between 0 and 100. re-enter marks of subject %d :",i+1);
    		scanf("%d",&marks[i]);
		}
	}
	total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
	percentage = total / 5;
	
	if (percentage > 75)
	{
		printf("you have passed the exam with Distinction. your percentage is : %f",percentage);
	}
	else if (percentage > 60 && percentage <= 75)
	{
		printf("you have passed the exam with first class. your percentage is : %f",percentage);
	}
	else if (percentage > 50 && percentage <= 60)
	{
		printf("you have passed the exam with second class. your percentage is : %f",percentage);
	}
	else if (percentage > 35 && percentage <= 50)
	{
		printf("you have passed the exam with pass class. your percentage is : %f",percentage);
	}
	else 
	{
		printf("sorry you have failed the exam. your percentage is : %f",percentage);
	}
	
return 0;	
}
