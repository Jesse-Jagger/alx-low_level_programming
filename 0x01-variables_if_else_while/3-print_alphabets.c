#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints alphabets
 *
 * Description: prints the alphabet in lower and Uppercases
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int i = 97;
	int o = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (o <= 90)
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
