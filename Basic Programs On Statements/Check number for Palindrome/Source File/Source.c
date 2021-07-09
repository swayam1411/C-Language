//	Q:- Write a c program to check whether a number is palindrome or not.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n ;
	int rem ,rev = 0 , num ;

	printf("enter a number(only integer): ");
	scanf("%d",&n);

	num = n ; // store given number in ‘num’ variable

	// checking number upto zero.
	while(n!=0)
	{
		rev = rev * 10 ;
		rem = n % 10 ;
		rev = rev + rem ;
		n = n / 10 ;
	}	//end while

	// check given number is same as reverse number or not.
	if( num == rev )
	{
		printf("Given number is palindrome number");
	}// end if
	else
	{
		printf("Given number is not palindrome number");
	}// end else
	
	getch();
}	//end main
