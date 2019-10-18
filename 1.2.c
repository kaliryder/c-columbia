/*
	Author: <Kali Ryder>
	Course: <Programming in C>
	Instructor: <Mr. Pajela>
	Assignment: <Lab 1>

	This program prompts user for a letter and returns true if letter is uppercase.
*/

#include <stdio.h>

/* main function checks if user input is uppercase, returns true if so */
int main(void)
{
	char c;

	printf("Enter character: ");
	scanf("%c", &c);
	
	if(c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' 
		|| c == 'G' || c == 'H' || c == 'I' || c == 'J' || c == 'K' || c == 'L'
			|| c == 'M' || c == 'N' || c == 'O' || c == 'P' || c == 'Q' || c == 'R'
				|| c == 'S' || c == 'T' || c == 'U' || c == 'V' || c == 'W'
					|| c == 'X' || c == 'Y' || c == 'Z')
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
