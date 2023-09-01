#include "main.h"

/**
 * print_binary - outputs the binary equal as of a decimal value
 * @n: value to output in binary
*/
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 50; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
