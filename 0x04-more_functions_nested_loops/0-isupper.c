#include "main.h"

/**
* _isupper - checks for a digit (0 through 9).
* @c: input character.
* Return: 1 if c is a digit, 0 if otherwise.
*/

int _isupper(int c)
{
	char alp;

	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		if (c == alp)
			return 1;
		else
			return 0;
	}
	return 0;
}
