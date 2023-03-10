#include "main.h"

/**
 * is_palindrome - This function evaluates whether a string is a palindrome
 * @s: The string to evaluate
 * Return: 1 if s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	if (len <= 1)
		return (1);

	return(helper(s, len));
}
