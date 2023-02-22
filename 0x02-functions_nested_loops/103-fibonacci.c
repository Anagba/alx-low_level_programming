#include <stdio.h>
/**
 * main - print the first 50 fibonacci's number
 *
 * Return: 0
 */
int main(void)
{
long int p, a = 1, b = 2, sum = 0, tsum = 0;

for (p = 0; p < 49; p++)
{
if ((b % 2 == 0) && (b <= 4000000))
{
tsum = tsum + b;
}
sum = a + b;
a = b;
b = sum;
}
printf("%ld\n", tsum);
return (0);
}
