// Write a program of structure for five employee that provides the following information print and display empno, empname, address and age 

#include<stdio.h>
struct employee 
{
	int empno;
	char name[100];
	char address[1000];
	int age;
};

int main()
{
	struct employee e[5];
	for (int i=0;i<5;i++)
	{
		printf("enter employee details of employee %d\n",i+1);
		printf("enter employee number :");
		scanf("%d",&e[i].empno);
		getchar();
		printf("enter name :");
		fgets(e[i].name,sizeof(e[i].name),stdin);
		printf("enter address :");
		fgets(e[i].address,sizeof(e[i].address),stdin);
		printf("enter age :");
		scanf("%d",&e[i].age);
		getchar();
		printf("\n");
		
	}
	for (int i=0;i<5;i++)
	{
		printf("employee details of employee %d are given below\n",i+1);
		printf("employee number of employee is %d:",e[i].empno);
		printf("name of employee is:");
		puts(e[i].name);
		printf("address of employee is:");
		puts(e[i].address);
		printf("age of employee is %d:",e[i].age);
	}
	return 0;
}
