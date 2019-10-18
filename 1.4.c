/*
	Author: <Kali Ryder>
	Course: <Programming in C>
	Instructor: <Mr. Pajela>
	Assignment: <Lab 1>

	This program prompts user to type C for the volume of a cube or S for the volume of a sphere and contains code and user prompts to compute the volumes of these shapes.
*/

#include <stdio.h>

/* based on user input, main function asks user for information on their desired shape then calculates and outputs the volume of the shape */
int main(void)
{
	char c;

	printf("Enter C for the volume of a cube of S for the volume of a sphere: ");
	scanf("%c", &c);

	if(c == 'C')
	{
		double volume, side;
		
		printf("Enter side length of cube: ");
		scanf("%lf", &side);

		volume = side * side * side;

		printf("Volume of cube = %lf\n", volume);
		return 0;
	}
	else if(c == 'S')
	{
		double volume, pi = 3.1415926535, radius;

		printf("Enter radius of sphere: ");
		scanf("%lf", &radius);

		volume = (4 / 3) * pi * (radius * radius * radius);

		printf("Volume of sphere = %lf\n", volume);
		return 0;
	}
}
