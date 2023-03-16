#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: counts the number of arguments passed
 * @argv: stores the arguments in array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
