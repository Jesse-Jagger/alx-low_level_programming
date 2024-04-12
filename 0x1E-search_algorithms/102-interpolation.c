#include "search_algos.h"

/**
 * interpolation_search - looks for a value in an array of
 * integers using the Interpolation search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, less, more;
	double k;

	if (array == NULL)
		return (-1);

	less = 0;
	more = size - 1;

	while (size)
	{
		k = (double)(more - less) / (array[more] - array[less]) * (value - array[less]);
		pos = (size_t)(less + k);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			less = pos + 1;
		else
			more = pos - 1;

		if (less == more)
			break;
	}
	return (-1);
}
