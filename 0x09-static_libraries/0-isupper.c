#include "main.h"

/**
* _isupper - checks for a digit (0 through 9).
* @c: input character.
* Return: 1 if c is a digit, 0 if otherwise.
*/

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
