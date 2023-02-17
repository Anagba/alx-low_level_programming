#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints all single digit number of
 * base 10 starting from 0 using putchar'
 *
 * Return: 0
 */
int main(void)
{
int i = 48;

while (i < 58)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
