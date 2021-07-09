//	Q:- Write a c program to check given number is Armstrong or not.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , temp , count ;
	int rem , i , ex ;
	int sum = 0 ;

	printf("Enter a number (only integer): ");
	scanf("%d",&number);	//take number from user.

	temp = number ;
	count = 0 ;
	
	// check number upto zero
	while( temp != 0 )
	{
		temp = temp / 10 ;
		count++;
	}	//end while

	temp = number ;
	
	// check number upto zero
	while( temp != 0 )
	{
		rem = temp % 10 ;
		i = 1 ;
		ex = 1 ;
	
		//To iterate 1 to count(number of digit)
		while( i <= count )
		{
			ex = ex * rem ;
			i++;			
		}	//end while
		sum = sum + ex ;

		temp = temp / 10 ;
	}	//end while

	// check number first is same as number second or not.
	if( number == sum )
	{
		printf("The number %d is Amstrong number",number);
	}	//end if 
	else
	{
		printf("The number %d is not Amstrong number",number);
	}	//end else

	getch();
}	//end main