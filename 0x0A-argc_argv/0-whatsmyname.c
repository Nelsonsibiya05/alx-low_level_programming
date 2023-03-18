#include <stdio.h>
#include "main.h"
#define UNUSED(argc) (void)(argc)

/**
 * main - write its name
 * @argc: argument count
 * @argv: array of pointers to argument string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}
