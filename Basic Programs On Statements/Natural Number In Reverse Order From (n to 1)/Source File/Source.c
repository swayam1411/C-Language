//	Q:- Write a C program to print all natural numbers in reserse (from n to 1). Using while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;

	printf("Enter a value of num(only integer): ");
	scanf("%d",&num);	//Take Number from user

	// To interate num to 1.
	printf("Natural number from 1 to %d in reverse order are\n",number);
	while(num >= 1)
	{
		printf("%d\n",num);
		num--;
	} // end while.

	getch();
} // end main.