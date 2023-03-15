#include "main.h"
#include <stdlib.h>

/**
 * create_array - main entry
 * @size: input
 * @c: input
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int 1;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (1 = 0; 1 < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
