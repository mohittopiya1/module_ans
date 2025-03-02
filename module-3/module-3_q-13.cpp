// Write a program to copy string from one string to another string with user define function.

#include <stdio.h>

void copyString(char *source, char *destination) 
{
    while (*source != '\0') 
	{  
        *destination = *source; 
        source++;  
        destination++;
    }
    *destination = '\0'; 
}

int main()
{
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);  
    
    copyString(source, destination);

    printf("Copied string: %s", destination);

    return 0;
}

