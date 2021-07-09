//	Q:- Write a c program to print multiplication table of any number.


#include<stdio.h>
#include<conio.h>

void main()
{
	int i , n ;

	printf("Enter a number for multiplication table(only integer): ");
	scanf("%d",&n);	 //Take Number from user

	// to iterate 1 T0 10 (multiplication table has only 10 values in table).
	printf("Multiplication Table of %d is\n",n);
	i = 1 ;
	while( i <= 10 )
	{
		printf("%d\n",n*i);
		i++;
	}	//end while
	
	getch();
}	//end main