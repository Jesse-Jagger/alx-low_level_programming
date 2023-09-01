#include "main.h"

/**
 * flip_bits - counts the number of bits to substitute
 * to get from one number to the other
 * @n: first number
 * @mn: second number
 * Return: number of bits to substitute
 */

unsigned int flip_bits(unsigned long int n, unsigned long int mn)
{
	unsigned long int exclusive = n ^ mn;
	unsigned int count = 0;
	int j;
	
	for (int j = 0; j < 64; j++)
	{
		if (exclusive & (1UL << j))
		{
			count++;
		}
	}
	return count;
