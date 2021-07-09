//	Q:- Write a c program to swap first and last digit of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , count , temp ;
	int rem ;
	int sum , i ;
	int rev , rev_1 ;
	int swap ;

	printf("Enter a number(only integer): ");
	scanf("%d",&number);	//take number from user.

	count = 0 ;
	temp = number;

	// check number upto zero ( count digit of number )
	while( temp != 0 )
	{
		count++;
		temp = temp / 10 ;
	}	//end while


	temp = number ;
	// check number upto zero ( last digit of number )
	while( temp != 0 )
	{
		rem = temp % 10 ;
		temp = temp / 10 ;
		break;
	}	//end while

	sum = rem ;
	// to iterate 1 to count
	for( i=1 ; i<count ; i++ )
	{
		sum = sum * 10 ;
	}	//end for


	rev = 0 ;
	rem = 0 ;
	// check temp upto less than equal to 10. ( to get first number )
	while( temp >= 10 )
	{
		rev = rev * 10 ;
		rem = temp % 10 ;
		rev = rev + rem ;
		temp = temp / 10 ;
	}	//end while


	rev_1 = 0 ;
	rem = 0 ;
	// check number upto zero
	while(rev!=0)
	{
		rev_1 = rev_1 * 10 ;
		rem = rev % 10 ;
		rev_1 = rev_1 + rem ;
		rev = rev / 10 ;
	}	//end while
	
	rev_1 = rev_1 * 10 ;

    // to swap first and last digit of number.
	swap = sum + rev_1 + temp ;		

	printf("after swapping => %d",swap);
	getch();
}	// end main.

