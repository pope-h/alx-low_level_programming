#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                      of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the [sub]array to search.
  * @high: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  * Description: Prints a value every time it is compared in the array.
  */

int _binary_search(int *array, int low, int high, int value)
{
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t chk = 1;
	size_t low;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (chk < size && array[chk] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", chk, array[chk]);
		chk *= 2;
	}

	low = chk / 2;
	high = (chk < size) ? chk : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (_binary_search(array, low, high, value));
}
