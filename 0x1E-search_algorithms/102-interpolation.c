#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	double high_low;
	size_t pos;
	int low = 0;
	int high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && array[low] <= value && array[high] >= value)
	{
		high_low = (high - low) / (array[high] - array[low]);
		pos = low + (high_low * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
