#include "main.h"
/**
 * main - prints the sign of a number
 *
 * Return: 1 and prints + if n is greater than zero 0 and prints -1
*/ 
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
