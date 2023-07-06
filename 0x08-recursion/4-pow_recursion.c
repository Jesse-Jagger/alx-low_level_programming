#include "main.h"
#include <stdio.h>

/**
 *factorial - function that returns the value of x and the power of y
 *@x: value to raise
 *@y: power
 *Return: value of power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
