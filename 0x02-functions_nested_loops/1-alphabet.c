#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lowercase
 * followed by new line
 */
void print_alphabet(void)
{
	int la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
