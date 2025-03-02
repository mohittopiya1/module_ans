// Write a program to sort the numbers using pointer and functions

#include <stdio.h>

void sortNumbers(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n ; i++) 
	{
        for (int j = i+1; j < n; j++)
		 {
            if (*(arr + i) > *(arr + j)) { 
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", (arr + i));
    }

    sortNumbers(arr, n);

    printf("Sorted numbers: ");
    for (int i = 0; i < n; i++)
	{
        printf("%d ", *(arr + i));  
    }

    return 0;
}

