//	Q:- Write a c program to print all perfect number from 1 to n.

#include<stdio.h>
#include<conio.h>

void main()
{
    int number ;
    int i , j , sum ;
    
    printf("Enter a number: ");
    scanf("%d",&number); // Take number from user
    
    // To iterate 1 to number
    for(i=1;i<=number;i++)
    {
        sum = 0 ;
        // To iterate 1 to value of i
        for(j=1;j<i;j++)
        {
            // factor of number
            if(i%j==0)
            {
                sum = sum + j ;
            }	//end if
        }	//end for

        // check numbers are same or not
        if(sum==i)
        {
            printf("%d\n",sum);
        }	//end f
    }	//end for

	getch();
}	//end main
