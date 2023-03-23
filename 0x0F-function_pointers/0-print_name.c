#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	/* if function pointer is null, print null */
	if (f == null)
		;
	else
		f(name);
}
