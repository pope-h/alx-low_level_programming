#include "search_algos.h"

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	int i;
	size_t low = 1;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (low <= high)
	{
		if (array[low] != value)
			low += low;
	}
}
