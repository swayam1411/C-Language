//	Q:- Write a c program to find sum all prime number from 1 to n.

#include<stdio.h>
#include<conio.h>
void main()
{
	int number , count ;
	int i , j ;
	int sum = 0 ;

	printf("Enter a Number (only integer):");
	scanf("%d",&number);

	i = 1 ;
	while( i<=number )
	{
		count = 0 ;
		j = 1;
		// to iterate 1 to i
		while( j<=i )
		{
			if( i%j == 0 )
			{
				count++;
			}	//end if
			j++;
		}	//end while
		
		// check count is 2 or not
		if( count == 2 )
		{
			sum = sum + i ;
		}	//end if
		i++;
	}	//end while
	
	printf("The sum of all prime number between 1 to %d is =>%d",number,sum);
	
	getch();
}	//end main

