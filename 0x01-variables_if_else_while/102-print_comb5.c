#include <stdio.h>

/**
 * main - The program prints the number from 00 to 99
 * Number are separated by a comma anda space, are printed
 * in ascending order, and putchar is used to screen.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			putchar(b);
			putchar(a);
			if (b != '9' || a != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
