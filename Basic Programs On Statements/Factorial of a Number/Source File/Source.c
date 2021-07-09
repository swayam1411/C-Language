//	Q:- Write a c program to calculate factorial of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number ;
	int i , fact = 1 ;

	printf("Enter a Number (only integer): ");
	scanf("%d",&number); // take number from user

	// To iterate 1 to given number
	for( i=1 ; i<=number ; i++ )
	{
		fact = fact * i ; 
	}	//end for loop
	printf("\nThe factorial of number %d is => %d\n",number,fact);

	getch();
}	//end main
