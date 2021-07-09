//	Q:- Write a c program to print all Armstrong number from 1 to N.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number , i , count ;
	int temp ;	
	int j ;
	int rem , ex , sum ;

	printf("Enter a number(only integer): ");
	scanf("%d",&number); // Take number from user.


	printf("Armstrong Number From 1 to %d are\n",number);
	i = 1 ;
	while( i <= number )
	{
		temp = i ;
		count = 0 ;
		
		// check temp upto zero
		while( temp != 0 )
		{
			count++;
			temp = temp / 10 ;
		}	//end while

		temp = i ;
		rem = 0 ;
		sum = 0 ;

		// check temp1 upto zero
		while( temp != 0 )
		{
			rem = temp % 10 ;
			ex = 1 ;
			j = 1 ;
			
			// check 'j' upto 'count'
			while( j<=count )
			{
				ex = ex * rem ;
				j++;
			}	//end while

			sum = sum + ex ;	
			temp = temp / 10 ;
		}	//end while

		temp = i ;

		// check number armstrong or not
		if( sum == temp )
		{
			printf("%d\n",temp);
		}	//end if
		
		i++;
	}	//end while
	
	getch();
}	//end main