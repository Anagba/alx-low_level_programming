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
	int p, n, sum = 0;

		for (p = 1; p < argc; p++)
		{
			for (n = 0; argv[p][n] != '\0'; n++)
			{
				if (!isdigit(argv[p][n]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[p]);
		}
		printf("%d\n", sum);
	return (0);
}
