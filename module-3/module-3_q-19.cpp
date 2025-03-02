// Write a program to concatenate the two string using pointer. 

#include <stdio.h>

void concatenate(char *str1, char *str2) 
{
    while (*str1) 
	{
        str1++;
    }

    while (*str2) 
	{
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char string1[100], string2[100];

    printf("Enter the first string:");
    gets(string1);
    printf("Enter the second string:");
    gets(string2);

    concatenate(string1, string2);

    printf("Concatenated string: %s\n", string1);

    return 0;
}
