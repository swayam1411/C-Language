//	Q:- Write a C program to print all natural numbers from 1 to n. using while loop.

#include<stdio.h>
#include<conio.h>

void main()
{  
	int num;
	int i;

	printf("Enter a value of num: ");
	scanf("%d",&num);

	// To iterate intial value to the end value.
	i = 1; // Initial loop variable.
	printf("The Natural number from 1 to N are\n");
	while(i <= num)
	{
		printf("%d\n",i);
		i++;
	} // end while

	getch();
} // end main.