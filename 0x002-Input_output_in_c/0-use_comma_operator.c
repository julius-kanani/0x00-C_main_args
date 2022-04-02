#include <stdio.h>

/**
 * main - Entry point.
 * Description: program to understand the use of a comma operator.
 * Return: Always 0.
 */

int main(void)
{
	int a, b, c, sum;

	sum = (a = 8, b = 7, c = 9, a + b + c);
	printf("Sum = %d\n", sum);

	return (0);
}
