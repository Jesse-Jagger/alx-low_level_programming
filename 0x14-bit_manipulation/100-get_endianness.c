#include "main.h"

/**
 * get_endianness - examines if a machine is little or big endian
 * Return: 0 for big, 1 for little
*/

int get_endianness(void)
{
	unsigned int u = 1;
	char *c = (char *) &u;

	return (*c);
}
