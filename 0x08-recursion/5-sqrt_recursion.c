#include "main.h"
/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: The number to find the squre root of
 * Return: The integer natural square of n
 */

int _sqrt_recursion(int n)
{
	/* base cases */
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	/* call helper to find natural root */
	else
		return (helper(n, 1));
}
