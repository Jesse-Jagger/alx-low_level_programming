#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search -  looks for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index that the value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (!array || size == 0)
		return (-1);

	while (k < size)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}
	return (-1);
}
