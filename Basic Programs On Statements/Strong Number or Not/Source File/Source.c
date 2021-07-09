//	Q:- Write a c program to check given number is strong or not.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , temp ;
	int i , rem , fact , sum ;

	printf("Enter a number (only integer): ");
	scanf("%d",&number);	//Take number from user

	temp = number ;
	sum = 0 ;

	// check number upto zero
	while( temp != 0 )
	{
		rem = temp % 10 ;
		fact = 1 ;
		// to iterate 1 to rem
		for( i=1 ; i<=rem ; i++ )
		{
			fact = fact * i ;
		}	//end for
		sum = sum + fact ;

		temp = temp / 10 ;
	}	//end while

	// check numbers are equal or not
	if( sum == number )
	{
		printf("%d is strong number",number);
	}	//end if
	else
	{
		printf("%d is not strong number",number);
	}	//end else
	
	getch();
}	//end main