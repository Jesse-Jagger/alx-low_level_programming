#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int d;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[i] = src[j];
		b++;
		d++;
	}

	dest[i] = '\0';
	return (dest);
}

