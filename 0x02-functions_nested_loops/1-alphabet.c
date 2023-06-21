#include "main.h"
/**
 * main - Main entry
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 (success)
*/
void print_alphabet(void)
{
	char j;

	for (j = 97; j <= 122; j++)
		_putchar(j);

	_putchar('\n');
}

