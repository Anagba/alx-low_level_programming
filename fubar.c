#include <stdio.h>
/**
 * main - entry point
 * Description: Aprogram that takes count of the number of argument
 * passed to it
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\". \n", argv[0]);

	if (argc > 1)
		for (count = 0; count < argc; count++)
			printf("argv[%d] = %s\n", count, argv[count]);

	else printf("The command had no other arguments.\n");

	return (0);
}
