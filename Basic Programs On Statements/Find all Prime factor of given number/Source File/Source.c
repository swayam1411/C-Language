//	Q:- Write a c program to find all prime factor of a number.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , i , j , count;

	printf("Enter a Number (only integer): ");
	scanf("%d",&number);	//take number from user


	printf("The all Prime factor of %d number are\n");
	i = 1 ;
	while( i<=number )
	{
		if( number%i == 0 )
		{
			j = 1 ;
			count = 0 ;
			// to iterate 1 to value of i. 
			while( j<=i )
			{
				if( i%j == 0 )
				{
					count++;
				}	//end if
				j++;
			}	//end while

			if( count == 2 )
			{
				printf("%d\n",i);
			}	//end if
		}	//end if
		i++;
	}	//end while

	getch();
}	//end main