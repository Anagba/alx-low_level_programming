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
	int  product;

	if (argc >= 1 || argc <=2)
	{
		product	= atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", product);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
