#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - single digit numbers
 *
 * Description: prints all single digit numbers of base 16 starting from 0
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;
	int o;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (o = 97; o <= 102; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
