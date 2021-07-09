//	Q:- Write a c program to calculate product of digits of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n ;
	int p = 1 , rem ;

	printf("Enter a number(only integer): ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem = n % 10 ;	// Remainder
		p = p * rem ;
		n = n / 10 ;
	}	// end while
	printf("The product of digit of number is => %d " , p);

	getch();
}	//end main
