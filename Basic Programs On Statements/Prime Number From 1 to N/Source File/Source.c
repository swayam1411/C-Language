//	Q:- Write a c program to find all prime number from 1 to n.

#include<stdio.h>
#include<conio.h>
void main()
{
	int number , count ;
	int i , j ;

	printf("Enter a Number (only integer):");
	scanf("%d",&number);


	printf("All Prime Number from 1 to %d are\n",number);
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
			printf("%d\t",i);
		}	//end if
		i++;
	}	//end while

	getch();
}	//end main

