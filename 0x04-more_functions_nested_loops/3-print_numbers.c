#include "main.h"

/**
 * print_numbers - This function prints the numbers 0-9
 * followed by new line
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');

	_putchar('\n');
}
