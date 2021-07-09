//	Q:- Write a c program to print all character with their values.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;

	// To iterate 1 upto 256
	for( i = 1 ; i <= 256 ; i++ )
	{
		printf("The ASCII character is %c and Their value is %d\n",i,i);
	}

	getch();
}	//end main