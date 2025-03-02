// Write a Program of find the element of given position from the array 

#include<stdio.h>
int main()
{   
    int n;
	printf("enter the length of array :");
	scanf("%d",&n);
	
	int num[n];
	for (int i=0;i<n;i++)
	{
		printf("enter number %d:",i);
		scanf("%d",&num[i]);
	}
 
    int find;
    printf("enter the element whose index you what to find:");
    scanf("%d",&find);
    
    for (int i=0;i<n;i++)
    {
    	if (num[i] == find)
    	{
    		printf("index of element is :%d",i);
		}
	}
	
}
