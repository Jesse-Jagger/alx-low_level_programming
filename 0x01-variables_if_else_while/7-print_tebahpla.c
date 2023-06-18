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
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
