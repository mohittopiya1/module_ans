// Write a program to read and write data from the file. 

#include<stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("sample1.txt","w");
	
	char arr[] = "hi i am mohit.this is a sample file.";
	
	fprintf(fptr,"%s",arr);
	
	fclose(fptr);
	
	fptr = fopen("sample1.txt","r");
	
	char ch;
	
	while ((ch = fgetc(fptr)) != EOF)
	{
		printf("%c",ch);
	}

	fclose(fptr);
	return 0;	
}
