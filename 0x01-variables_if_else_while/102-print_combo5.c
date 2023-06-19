#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - combinations of two two-digit numbers
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
		}
		if (n == 57 && m == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
