#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: character pointer to argument passed into the command line
 * Description: A program that multiplies two integers read
 * Return: 0 if successful, if no argument is entered returns 1
 */

int main(int argc, char **argv)
{
	int p, product = 1;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			product *= atoi(argv[p]);
		}
		printf("%d\n", product);
	}
	if (p == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
