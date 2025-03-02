// Write a program make a summation of given number(E.g. 1523 ans :-11) 

#include<Stdio.h>
int main()
{
	printf("pattern (a):\n");
	for (int i=1;i<5;i++)
	{
		for (int j=0;j<i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
    
	printf("pattern (b):\n");
	
	int num=1;
	for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++) 
		{ 
		    printf("%d ", num);
            num++; 
        }
        printf("\n");
    }
    
    printf("pattern (c):\n");
    
	for (int i=0;i<4;i++)
	{   
	    printf("%*s", i, ""); 
		for (int j=i;j<4;j++)
		{
			printf("*");
		}
	printf("\n");
	}	
	
}


