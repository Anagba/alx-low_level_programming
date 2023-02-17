#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints the alphabets except a few'
 *
 * Return: 0
 */
int main(void)
{
char b;

for (b = 'a'; b <= 'z'; b++)
if (b != 'q' && b != 'e')
putchar(b);
putchar('\n');
return (0);
}
