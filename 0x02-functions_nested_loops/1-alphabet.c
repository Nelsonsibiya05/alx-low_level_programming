#include "main.h"

/**
 * print_alphabet - This fumction prints the alphabet in lowercase
 * followed by new line
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		_putchar(ch);
	}

	_pitchar('\n');
}
