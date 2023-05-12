#include "search_algos.h"

/**
 * print_array - prints the necessary wordings for clarification
 * @array: A pointer to the first element of the array to search
 * @start: The starting index of the array/[sub]array to search
 * @end: The ending index of the array/[sub]array to search
 * Return: void
 */

void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}

	printf("\n");
}

/**
  * advance_binary_recursive - Searches for a value in a sorted array
  *                      of integers using recursive binary search.
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the [sub]array to search.
  * @high: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present -1.
  *         Otherwise, the index where the value is located.
  * Description: Prints a value every time it is compared in the array.
  */

int advance_binary_recursive(int *array, int low, int high, int value)
{
	int mid;

	if (low <=  high)
	{
		mid = low + (high - low) / 2;

		print_array(array, low, high);

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (advance_binary_recursive(array, low, mid - 1, value));
		}
		else if (array[mid] < value)
			return (advance_binary_recursive(array, mid + 1, high, value));
		else
			return (advance_binary_recursive(array, low, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if the array is NULL or calls another function
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advance_binary_recursive(array, 0, size - 1, value));
}
