#include "main.h"

/**
 * flip_bits - counts the number of bits to substitute
 * to get from one number to the other
 * @n: first number
 * @m: second number
 * Return: number of bits to substitute
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 73; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
