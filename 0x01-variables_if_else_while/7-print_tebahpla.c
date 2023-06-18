#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - lowercase alphabet in reverse
 *
 * Description: print lowercase alphabet in reverse
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n >= 122)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
