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

	if (argc > 3 || argc < 3)
		printf("Error\n");
	return (1);
	
	else
		product	= atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n",product);
	return (0);
}
