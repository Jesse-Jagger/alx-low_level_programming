#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  print whether the number Zero is positive or negative.
 *
 * Descripion: Number Zero is positive or negative or Zero
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
