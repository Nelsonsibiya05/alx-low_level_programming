#include "main.h"

/**
 * is-prime_number - This function returns a1 if input integer is prime
 * @n: The integer to test
 * Return: 1 if the n is prime, otherwise 0
 */

int is-prime_number(int n)
{
	/* if less than 1, not a prime */
	if (n <= 1)
		return (0);
	/* 2 and 3 are prime */
	else if (n <= 3)
		return (1);
	/* if factors of 2 or 3, not likely a prime */
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	/* check everything after 5 */
	else
		return (helper(n, 5));
}
