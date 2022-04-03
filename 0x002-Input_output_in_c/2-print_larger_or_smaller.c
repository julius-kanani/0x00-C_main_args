#include <stdio.h>

/**
 * main - print the larger and smaller of two numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, b;

	printf("Enter the first number : ");
	scanf("%d", &a);

	printf("Enter the second number : ");
	scanf("%d", &b);

	if (a > b)
		printf("larger number = %d and smaller number = %d\n", a, b);
	else
		printf("larger number = %d and smaller number = %d\n", b, a);
	return (0);
}
