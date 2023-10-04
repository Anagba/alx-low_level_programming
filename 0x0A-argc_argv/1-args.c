#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument used to store strings passed into the command line
 * as arguments
 * Description: A program that takes count of arguments passed
 * Return: 0
 */

int main(int argc, char __attribute__((unused)))
{
	int p;

	if (argc > 1)
		for (p = 1; p < argc; p++)
			printf("%d\n", p);
	else
		printf("No argument passed\n");
	return (0);
}
