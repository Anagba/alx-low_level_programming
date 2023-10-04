#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
			if (isdigit(argv[p])
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
