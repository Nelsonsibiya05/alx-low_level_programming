#include "main.h"

/**
 * *_strcpy - This function copies string to by src
 * including the terminating null byte (\0) to the buffer pointed to to the dest
 * @src: The string to copy
 * @dest: The buffer to copy to
 * Return: The string str
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);

}
