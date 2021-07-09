//	Q:- Write a c program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n ;
	int i ;
	int sum = 0 ;

	printf("Enter a value of n(only integer): ");
	scanf("%d",&n);	  //Take Number from user

	// To iterate initial value to last value.
	i = 1 ;
	while(i <= n)
	{
		sum = sum + i ;
		i++;
	}	// end while

	printf("The sum of natural numbers between 1 to %d is => %d " , n , sum);

	getch();
}	// end main.