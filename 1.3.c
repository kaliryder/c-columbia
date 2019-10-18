/*
	Author: <Kali Ryder>
	Course: <Programming in C>
	Instructor: <Mr. Pajela>
	Assignment: <Lab 1>

	This program prompts user for grade number and outputs their current level of education.
*/

#include <stdio.h>

/* main function asks for user grade and finds their current level of education from the grade number, outputs user level */
int main(void)
{
	int grade;

	printf("Enter grade number: ");
	scanf("%d", &grade);

	if(grade == 0)
	{
		printf("None\n");
		return 0;
	}
	else if(grade >= 1 && grade <= 5)
	{
		printf("Elementary School\n");
		return 0;
	}
	else if(grade >= 6 && grade <= 8)
	{
		printf("Middle School\n");
		return 0;
	}
	else if(grade >= 9 && grade <= 12)
	{
		printf("High School\n");
		return 0;
	}
	else if(grade > 12)
	{
		printf("College\n");
		return 0;
	}
	else
	{
		printf("Invalid grade number\n");
		return 0;
	}
}
