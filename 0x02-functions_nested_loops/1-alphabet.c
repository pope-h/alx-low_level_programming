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
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	return (0);
}
