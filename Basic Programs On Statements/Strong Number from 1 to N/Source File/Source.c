//	Q:- Write a c program to print all strong number from 1 to n.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , i , temp ;
	int j , rem , fact , sum ;

	printf("Enter a number (only integer): ");
	scanf("%d",&number);	//Take number from user


	printf("The Strong number from 1 to %d are\n",number);
	// To iterate 1 to number
	for( i=1 ; i<=number ; i++ )
	{
		temp = i ;
		sum = 0 ;
		// check i upto zero
		while( temp != 0 )
		{
			rem = temp % 10 ;
			fact = 1 ;
			// to iterate 1 to rem
			for( j=1 ; j<=rem ; j++ )
			{
				fact = fact * j ;
			}	//end for

			sum = sum + fact ;

			temp = temp / 10 ;
		}	//end while

		// check numbers are equal or not
		if( sum == i )
		{
			printf("%d\n",i);
		}	//end if
	}	//end for
	
	getch();
}	//end main

