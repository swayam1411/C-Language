//	Q:- Write a c program to check number is prime or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int number ;
	int i , count ;

	printf("Enter a number (integer): ");
	scanf("%d",&number);	//Take a number from user.

	count = 0 ;
	i = 1 ;
	while( i<=number )
	{	
		if( number%i == 0 )
		{
			count++;
		}	//end if
		i++;
	}	//end while

	//check count is 2 or not
	if( count == 2 )
	{
		printf("The number %d is a prime number",number);
	}	//end if
	else
	{
		printf("The number %d is not a prime number",number);
	}	//end else

	getch();
}	//end main
