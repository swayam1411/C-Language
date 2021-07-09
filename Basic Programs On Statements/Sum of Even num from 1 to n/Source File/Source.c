//	Q:- Write a c program to print sum of all even numbers between 1 to n.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i , n ;
	int sum_of_even = 0;

	printf("Enter value of n(only integer): ");
	scanf("%d",&n);	  //Take number from user

	// To iterate 1 to n.
	for( i = 1 ; i <= n ; i++ )
	{
		if( i%2 == 0)
		{
			sum_of_even += i;
		}	// end of if condition
	}	// end of for

	printf("The sum of even numbers between 1 to %d is => %d " , n , sum_of_even);
	
	getch();
}	// end main