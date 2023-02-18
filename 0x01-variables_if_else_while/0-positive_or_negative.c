#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program uses the function r and() to output
 * random number to the screen, then tell s the user if it's
 * positive, negative, or a zero.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	if (n>0)
		printf("%d is positive\n" , n);
	else if (n == 0)
		printf("%d is negative\n" , n);

	return (0)
}
