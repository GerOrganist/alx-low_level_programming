#include "main.h"

/**
 * print_alphabet_x10.c - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
