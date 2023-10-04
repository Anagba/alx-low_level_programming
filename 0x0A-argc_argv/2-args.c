#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: character pointer to every string passed into the
 * command line
 * Description: A program that prints all arguments received
 * separating them with a new line
 * Return: 0
 */

int main(int argc, char **argv)
{
	int p;
	if (argc > 1)
		for (p = 1; p < argc; p++)
		{
			printf("%s", *argv);
			printf("\n");
		}
	return (0);
}
