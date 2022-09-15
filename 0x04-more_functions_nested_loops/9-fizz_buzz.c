#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 2; i++)
		printf("%d ", i);
	{
		for (i = 3; i <= 100; i++)
		{
			if ((i % 15) == 0)
				printf("FizzBuzz ");
			else if ((i % 5) == 0)
				printf("Buzz ");
			else if ((i % 3) == 0)
				printf("Fizz ");
			else if (i == 100)
				printf("%d", i);
			else
				printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
