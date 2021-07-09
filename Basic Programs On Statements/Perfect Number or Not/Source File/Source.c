//	Q:- Write a c program to check given number is perfect or not.

#include<stdio.h>
#include<conio.h>

void main()
{
    int number , temp ;
    int i , sum ;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    temp = number ;
    sum = 0 ;
    
    i = 1 ;
    while(i<temp)
    {
        // check factors of number
        if(temp%i==0)
        {
            sum = sum + i ;
        }    
        i++;
    }	//end while

    // check numbers are same or not
    if(sum==number)
    {
        printf("%d is a perfect number",number);
    }	//end if
    else
    {
        printf("%d is a not perfect number", number);
    }	//endelse
	
	getch();    
}
