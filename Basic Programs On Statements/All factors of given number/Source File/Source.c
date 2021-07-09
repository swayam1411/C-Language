//	Q:- Write a c program find all factors of  number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number ;
	int i ; 
	printf("Enter a number (only integer): ");
	scanf("%d",&number);	// Take number from user

	
	printf("The All Factors of number %d are\n",number);
	i = 1 ;
	while( i<=number )
	{
		if( number%i == 0 )
		{
			printf("%d\t",i);
		}	//end if
		i++;
	}	//end while

	getch();
}	//end main