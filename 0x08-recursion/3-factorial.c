#include "main.h"

/**
 * factorial - This function returns the faction of a given number
 * @n: The given number to calculate factorial from
 * Return: This integer factorial product */

int factorial(int n)
{
	/* if n is less than 0, return an error */
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
