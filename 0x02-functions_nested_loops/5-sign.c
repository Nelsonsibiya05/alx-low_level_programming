#include "main.h"

/**
 * print_sigh - prints the sigh of a number
 * @n: the numbe of the sign to the printed
 * Return: 1 if  number is greater than zere
 * 0 of number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
