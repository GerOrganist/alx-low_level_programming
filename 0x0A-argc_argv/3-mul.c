#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: count the number of arguments
 * @argv: stores the arguments as array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
