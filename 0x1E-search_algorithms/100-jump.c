#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t curr = jump;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	for (i = prev; i <= curr && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
