//Emmanuel Murimi
//CT100/G/30744/26

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secret_number,guess;
	int attempts = 0;
	srand(time(0));
	secret_number = rand()%20 + 1;
	
printf("Guess a number between 1 and 20:\n");

while (1)
{
	printf("Enter your guess: ");
	scanf("%d",&guess);
	attempts++;
	
if (guess > secret_number)
{
	printf("Too high!\n");
}

else if (guess < secret_number)
{
	printf("Too low!\n");
}
else
{
	printf("Congratulations!\n");
	printf("It Took %d attempts to guess correctly.\n",attempts);
	break;
}
}
	return 0;
}