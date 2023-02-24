#include "main.h"

/**
 * print_line - This function draws a straight line in the terminal
 * @n: Number of times the _ should be printed
 */
void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; 1++)
		{
			_putchar('_');
		}
	}
	
	_putchar('\n');
}
