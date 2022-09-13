#include "main.h"

/**
 * main - Entry point.
 *
 * Description: Print out a string.
 *
 * Return: 0 Always Successful
 */

int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
