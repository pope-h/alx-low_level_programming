#include "main.h"

/**
 * _isalpha - Entry point.
 *
 * @c: checks for lowercase and uppercase character.
 *
 * Return: 1 if letter is lowercase or uppercase, 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
