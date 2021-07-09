//	Q:- Write a c program to print sum of all odd numbers between 1 to n.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i , n ;
	int sum_of_odd = 0;

	printf("Enter value of n(only integer): ");
	scanf("%d",&n);	  //Take number from user

	// To iterate 1 to n.
	for( i = 1 ; i <= n ; i++ )
	{
		if( i%2 == 1)
		{
			sum_of_odd += i;
		}	// end of if condition
	}	// end of for

	printf("The sum of odd numbers between 1 to %d is => %d " , n , sum_of_odd);
	
	getch();
}	// end main