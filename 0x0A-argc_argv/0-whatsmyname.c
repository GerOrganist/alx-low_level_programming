#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: counts the number of arguments passed
 * in the command line
 * @argv: storing different arguments as array
 *
 * Return: 0 (Success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
