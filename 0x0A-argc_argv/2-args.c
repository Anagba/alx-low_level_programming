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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
