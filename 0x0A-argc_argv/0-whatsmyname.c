#include "main.h"
/**
 * main - entry point
 * @argv: an array of strings passed as arguments
 * Description: A program that prints its name even after the
 * name has been changed to something else
 * Return: 0
 */

int main(char *argv[])
{
	_putchar(*argv[0]);
	_putchar('\n');

	return (0);
}
