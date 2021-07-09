//	Q:- Write a c program to count number of digits in a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , count = 0 ;

	printf("Enter a number (only integer): ");
	scanf("%d",&number);

	// to check the given number is not equal zero
	while(number != 0)
	{
		number = number / 10 ; 
		count++;	
	}	//end if condition
	printf("The number of digit is => %d " , count);

	getch();
}	//end main