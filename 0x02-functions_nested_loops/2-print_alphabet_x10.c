#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 *
 * Description: Print the alphabets in small letters, 10 times.
 *
 * Return: 0 Always successful.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
