#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - combinations of two digits
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
