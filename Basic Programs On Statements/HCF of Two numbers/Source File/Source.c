//	Q:- Write a c program to find HCF (gcd) of two numbers .

#include<stdio.h>
#include<conio.h>

void main()
{
	int first , second ;
	int i , gcd_of_number , min ;

	printf("Enter value of First number (only integer): ");
	scanf("%d",&first);		// Take number from user

	printf("Enter value of Second number (only integer): ");
	scanf("%d",&second);		// Take number from user

	min = (first < second )?first:second;	// check smallest among two numbers.

	// to iterate 1 upto min
	i = 1 ;
	while( i<=min )
	{
		// check common number which are divides first and second number.
		if( first%i == 0  &&  second%i == 0 )
		{
			gcd_of_number = i ;
		}	//end if
		i++;
	}	//end while
	printf("The GCD of %d and %d is => %d",first,second,gcd_of_number);

	getch();
}	//end main