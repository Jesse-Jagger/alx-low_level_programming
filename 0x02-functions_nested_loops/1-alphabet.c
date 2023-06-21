#include "main.h"
/**
 * main - Main entry
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 (success)
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
