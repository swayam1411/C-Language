//	Q:- Write a C program to print all aplhabets from a to z. using while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	char a = 'a' ;  

	// To iterate alphabet 'a' to 'z'.
	printf("Alphabet from a to z are\n");
	while(a <= 'z')
	{
		printf(" %c ",a);
		a++;
	} // end while
	getch();
}  // end main.