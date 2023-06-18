#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - single digit numbers
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (sucsess)
*/
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
