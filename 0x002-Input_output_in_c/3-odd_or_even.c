#include <stdio.h>

/**
 * main - print even or odd.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d is even\n", num);
	else
		printf("%d is odd\n", num);

	return (0);
}
