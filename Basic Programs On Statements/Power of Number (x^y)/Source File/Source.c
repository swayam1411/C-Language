//	Q:- Write a c program find power of a number using for loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , e ;
	int i , power = 1 ;

	printf("Enter a Number (only integer): ");
	scanf("%d",&number); // take number from user

	printf("\nEnter Exponent (only integer): ");
	scanf("%d",&e); // take exponent from user 

	// To iterate 1 to end value
	for( i=1 ; i<=e ; i++ )
	{
		power = power * number ; 
	}	//end for loop
	printf("\nThe power of number is => %d\n",power);
	
	getch();
}	//end main