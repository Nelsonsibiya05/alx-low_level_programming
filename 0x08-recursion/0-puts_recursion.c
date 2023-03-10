#include "main.h"

/**
 * _puts_recursion - This funtion prints a string followed by a newline
 * @s: The string array to printto standard output
 */

void _puts_recursion(char *s)
{
	/* if the pointer index reaches the null terminator, new line & return */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* otherwise, print the current array index */
	_putchar(*s);
	/* call funtion */
	_putchar(*s + 1);
}
