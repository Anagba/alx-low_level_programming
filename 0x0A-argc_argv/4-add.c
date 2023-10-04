#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - entry point
 * @c: the integer to be considered
 * Description: A program that checks if a character is a number
 * Return: 1 if yes, 0 if no
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: An array of strings of argument passed in the command line
 * Description: A program that performs addition of integers
 * Return: 0, else,  1 if argument is a symbol other than
 * a number
 */

int main(int argc, char **argv)
{
	int sum, p;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			if (_isdigit(argv[p] != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[p]);
		}
		printf("%d\n", sum);
	}

	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
