#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: String.
 * Return: null.
 */

void print_rev(char *s)
{
	int c, i;

	c = 0;
	while (s[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
