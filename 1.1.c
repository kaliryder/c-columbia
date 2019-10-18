/*
	Author: <Kali Ryder>
	Course: <Programming in C>
	Instructor: <Mr. Pajela>
	Assignment: <Lab 1>

	This program prompts user for 3 numbers and outputs true if the third is strictly between the first and second.
*/

#include <stdio.h>
#include <stdbool.h>

/*main function prompts user for 3 numbers, outputs true if the third is strictly between the first and second */
int main(void)
{
	double a, b, c;
	
	printf("Enter first number: ");
	scanf("%lf", &a);
	printf("Enter second number: ");
	scanf("%lf", &b);
	printf("Enter third number: ");
	scanf("%lf", &c);

	if(c > a && c < b)
	{
		printf("True\n");
		return 1;
	}
	else
	{
		printf("False\n");
		return 0;
	}
}
