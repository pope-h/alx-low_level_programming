#include "main.h"

/**
 * _isLower - Entry point.
 *
 * @c: checks for lowercase character.
 *
 * Return: 1 if letter is lowercase, 0 if not.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
