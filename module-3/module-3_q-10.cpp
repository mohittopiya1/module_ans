// Write a program to sort the array of 5 elements. 

#include <stdio.h>

int main ()
{
   int num[20];
   int i, j, a, n;
   
   printf("Enter number of elements in an array :");
   scanf("%d", &n);
   
   for (i = 0; i < n; ++i)
   {
   printf("Enter the elements:");
   scanf("%d", &num[i]);
   }  
   
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
	  {
         if (num[i] > num[j])
		 {
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; ++i)
   {
      printf("%d\n", num[i]);
   }
}
