#include "main.h"
#include <string.h>
/**
 * *_memset - This function fills memorywith a constant byte
 * @s: The array buffer to fill
 * @b: The constant char byte to fill the buffer with
 * @n: The number of bytes to fill
 * Return: The pointer to the memory areas
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
