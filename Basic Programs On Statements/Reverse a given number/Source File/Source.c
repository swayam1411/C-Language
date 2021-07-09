//	Q:- Write a c program to enter a number and print its reverse.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n ;
	int rem ,rev = 0 ;

	printf("enter a number(only integer): ");
	scanf("%d",&n);

	// checking number upto zero.
	while(n!=0)
	{
		rev = rev * 10 ;
		rem = n % 10 ;
		rev = rev + rem ;
		n = n / 10 ;
	}	//end while

	printf("The Reverse Number of %d is =>%d",n,rev);
	getch();
}	//end main