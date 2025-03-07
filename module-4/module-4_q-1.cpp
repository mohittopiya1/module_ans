// Write a program to read data from file.
// i have create a file with name sample.txt and have written some content in it to read from the file.


#include<stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("sample.txt","r");
	
	char ch;
	
	while ( (ch = fgetc(fptr)) != EOF )
	{
		printf("%c",ch);
		
	}

	fclose(fptr);
	return 0;	
}
