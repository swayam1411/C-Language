//	Q:- Write a c program to find LCM of two numbers .

#include<stdio.h>
#include<conio.h>

void main()
{
	int first , second ;
	int i , lcm , max ;

	printf("Enter value of First number (only integer): ");
	scanf("%d",&first);		// Take number from user

	printf("Enter value of Second number (only integer): ");
	scanf("%d",&second);		// Take number from user

	i = 1 ;
	max = (first > second )?first:second;	// check smallest among two numbers.

	// to iterate 1 upto max
	while( 1 )
	{
		// check common number which are divides first and second number.
		if( max%first == 0  &&  max%second == 0 )
		{
			lcm = max ;
			break;
		}	//end if
		max++;
	}	//end while
	
	printf("The LCM of %d and %d is => %d",first,second,lcm);

	getch();
}	//end main