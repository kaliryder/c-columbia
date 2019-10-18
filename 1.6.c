/*
	Author: <Kali Ryder>
	Course: <Programming in C>
	Instructor: <Mr. Pajela>
	Assignment: <Lab 1>

	This program prompts user to enter the local sunset hour and minute and outputs a message depending on the local time.
*/

#include <stdio.h>
#include <time.h>

int main(void)
{
	/* calculates and outputs current time in 24-hour format */
	time_t t;
	struct tm *now;
	t = time(0);
	now = localtime(&t);
	int hour = now->tm_hour;
	int min = now->tm_min;

	printf("Current time: %d:", hour);
	printf("%d\n", min);

	/* calculates sunset hour and minute */
	int sshour, ssmin;

	printf("Enter sunset hour: ");
	scanf("%d", &sshour);

	printf("Enter sunset minute: ");
	scanf("%d", &ssmin);

	/* formats both current and sunset time as HHMM */
	int formathour = hour * 100;
  int formatsshour = sshour * 100;

	int time = formathour + min;
	int sstime = formatsshour + ssmin;
	
	/* checks to see if current time is between midnight and noon, noon and 			sunset or sunset and midnight */
	int mn = 0;
	int noon = 1200;
	
	if(mn <= time && time < noon)
	{
		printf("Good morning.\n");
	}
	else if(noon <= time && time < sstime)
	{
		printf("Good afternoon.\n");
	}
	else if(sstime <= time)
	{
		printf("Good evening.\n");
	}
	
	/* prompts user for minutes until they arrive home, calculates user return time */
	int mins;	
	
	printf("How many minutes from now do you expect to be home?: ");
	scanf("%d", &mins);

	int hours = (mins / 60) * 100;
	mins = mins % 60;

	int homehour = (formathour + hours) / 100;
	int homemin = min + mins;

	printf("You will get home at %d:", homehour);
	printf("%d.\n", homemin);
	
	return 0;
}

