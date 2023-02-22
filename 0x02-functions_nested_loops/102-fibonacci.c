#include <stdio.h>
/**
 * main - prints first 50 fibonacci's number
 *
 * Return: 0
 */
int main(void)
{
long int p, a = 1, b = 2, sum = 0;
for (p = 0; p < 49; p++)
{
printf("%ld, ", a);
sum = a + b;
a = b;
b = sum;
if (p == 48)
printf("%ld\n", a);
}
return (0);
}
