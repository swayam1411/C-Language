//	Q:- Write a c program to print all odd numbers between 1 to 100. using while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	
	// To iterate intial value	to 100.
	printf("Odd Numbers between 1 to 100 are\n");
	i = 1;
	while(i <= 100)
	{
		// To print all odd numbers between 1 to 100.
		if(i%2 == 1)
		{
			printf("%d\n",i);
		}	// end if conition.
		i++;
	}	// end while
	
	getch();
}	// end main.

