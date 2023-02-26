#include <stdio.h>

/**
 * main - This program prints the numbers 1-100, followed by new line.
 * but for multiples of 3, prints 'Fizz' instead of the number
 * for multiples of 5, print 'Buzz', and
 * for multipls of both prints 'FizzBuzz'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");

		if (i != 100)
			printf(" ");
	}

	printf('\n');
	return (0);
}
