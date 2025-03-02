// Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case.(Must Be Menu Driven)

#include<stdio.h>
int main()
{   
    int m;
	printf("enter\n (1) for area of triangle\n (2) for area of rectangle\n (3) for area of circle\n your input:");
	scanf("%d",&m);
	printf("\n");
	switch (m)
	{
		case 1:{
		        printf("you have opt to find area of triangle!\n");
		        int h,b;
		        float area;
		        printf("enter height of triangle:");
		        scanf("%d",&h);
		        printf("enter base of triangle:");
		        scanf("%d",&b);
		        area = 0.5 * h * b;
		        printf("area of triangle is:%f",area);
		     	break;
	        	}
		        
		case 2:{  
		        printf("you have opt to find area of rectangle!\n");
		        int l,b,area;
		        printf("enter length of rectangle:");
		        scanf("%d",&l);
		        printf("enter breath of rectangle:");
		        scanf("%d",&b);
		        area = l * b;
		        printf("area of rectangle is:%d",area);
			    break;
		        } 
		        
		case 3:{
			    printf("you have opt to find area of circle!\n");
		        int r;
		        float area;
		        printf("enter radius of circle:");
		        scanf("%d",&r);
		        area = 3.14 * r * r;
		        printf("area of circle is:%f",area);
			    break;
		        }
		
	}
	return 0;
}
