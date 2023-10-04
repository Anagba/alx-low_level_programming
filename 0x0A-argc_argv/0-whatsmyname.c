#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: takes count of the argument entered
 * @argv: an array of strings passed as arguments
 * Description: A program that prints its name even after the
 * name has been changed to something else
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	
	_putchar(**argv);
	_putchar('\n');

	return (0);
}
