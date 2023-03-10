#include "main.h"

/**
 * *_strncpy - This function copies a string
 * @src: The string copy
 * @dest: The string to copy to
 * @n: The number of bytes to copy from src
 * Return: dest - the copied string
 * */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy n bytes of src string to dest string */
	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];

	/* add null byte to dest string array after copied char
	 */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
