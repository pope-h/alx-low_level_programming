#include "main.h"

/**
 * print_alphabet - Print alphabets in small letters.
 *
 * Description: Print out a string.
 *
 * Return: 0 Always Successful
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
