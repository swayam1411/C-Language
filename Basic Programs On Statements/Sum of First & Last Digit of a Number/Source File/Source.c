//	Q:- Write a c program to find sum of first and last digit of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , f_d , l_d ;
	int sum;
	printf("Enter a number (only integer): ");
	scanf("%d",&number);

	l_d = number % 10 ;	

	while(number >= 10)
	{
		number = number / 10 ;
	}	//end while
	f_d = number ;
	
	sum = f_d + l_d;
	printf("Sum of first digit and last digit is => %d ", sum);

	getch();
}	// end main.

