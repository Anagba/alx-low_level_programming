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

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
