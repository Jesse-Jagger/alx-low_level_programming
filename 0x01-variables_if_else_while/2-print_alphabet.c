#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints alphabets
 *
 * Description: prints the alphabet in lowercase
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
