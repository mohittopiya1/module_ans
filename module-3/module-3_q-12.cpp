// write a program to find out the max number from given matrix

#include <stdio.h>

int main() 
{
    int matrix[10][10], rows, cols, max;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0]; 
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
            }
        }
    }

    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
}

