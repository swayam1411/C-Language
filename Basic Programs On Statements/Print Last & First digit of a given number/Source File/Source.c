//	Q:- Write a c program to find first and last digit of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , f_d , l_d ;

	printf("Enter a number (only integer): ");
	scanf("%d",&number);

	l_d = number % 10 ;	

	while(number >= 10)
	{
		number = number / 10 ;
	}	//end while
	f_d = number ;

	printf("First Digit is => %d", f_d);
	printf("last Digit is => %d", l_d);

	getch();
}	// end main.

