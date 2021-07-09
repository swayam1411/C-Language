/*
*	Que14:- Write a c program to calculate sum of digits of a number.
*	Owner:- SONAWANE SWAYAM SHIVAJI.
*	Batch:- PPA9
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n ;
	int sum = 0 , rem ;

	printf("Enter a number(only integer): ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem = n % 10 ;	// Remainder
		sum = sum + rem ;
		n = n / 10 ;
	}	// end while
	printf("The sum of digit of number is => %d " , sum);

	getch();
}	//end main