#include <stdlib.h>
#include "dog.h"

/**
 * *_strdup - This function duplicayes strings
 * @s: The string to duplicate
 * Return: The duplicated string
 */

char *_strdup(const char *s)
{
	int i, j;
	char *d = NULL;

	/* find length of s */
	for (i = 0; s[i] != '\0'; i++)
		;
	/* allocate space for length and null */
	dn= malloc(i + 1);

	/* if malloc fails, return NULL */
	if (d == NULL)
		return (NULL);

	/* copy the characters into a separate string */
	for (j = 0; s[j] != '\0'; j++)
		d[j] = s[j];

	d[j] = '\0';

	/* return the new string */
	return (d);
}
