#include "main.h"
#include <unistd.h>

/**
 * _put_recursion - entry point
 * @s: a character pointer to the string
 * Description: A program that prints out a string
 * Return: void
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(*s);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - entry point
 * @s: a character pointer to the string
 * Description: A program that prints out a string
 * Return: 0
 */
int main(void)
{
	char *s = "Puts with recursion";

	_puts_recursion(*s);

	return (0);
}
