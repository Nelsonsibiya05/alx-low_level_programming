#include "main.h"

/**
 * _putchar_rev_recursion - This function prints a string in reverse
 * @s: The string array to printto standard output
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
