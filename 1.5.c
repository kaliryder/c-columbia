/*
	Author: <Kali Ryder>
	Course: <Programming in C>
	Instructor: <Mr. Pajela>
	Assignment: <Lab 1>

	This program prompts user to enter month and year and outputs number of days in the month.
*/

#include <stdio.h>

/* main function finds if user year is a leapyear, then finds how many days are in the user month based on this information, outputs days in user month */
int main(void)
{
	int month, year, leapyear;

	printf("Enter month (1-12): ");
	scanf("%d", &month);

	printf("Enter year: ");
	scanf("%d", &year);

	/* finds if user year is a leapyear */
	if(year % 4 == 0)
	{
		leapyear = 1;
	}
	else
	{
		leapyear = 0;
	}

	/* checks if user month is a 31-day month */
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
		|| month == 10 || month == 12)
	{
		printf("This month has 31 days.\n");
		return 0;
	}
	/* calculates days in January based on leapyear information */
	else if(month == 2)
	{
		if(leapyear == 1)
		{
			printf("This month has 29 days. Leap year!\n");
			return 0;
		}
		else if(leapyear == 0)
		{
			printf("This month has 28 days.\n");
			return 0;
		}
	}
	/* checks if user month is a 30-day month */
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("This month has 30 days.\n");
		return 0;
	}
	else
	{
		printf("Invalid date entry.\n");
		return 0;
	}
}
