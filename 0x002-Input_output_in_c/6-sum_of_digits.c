#include <stdio.h>

/**
 * main - print sum of digits of any positive number.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num, sum = 0, rem;

	printf("Enter the number : ");
	scanf("%d", &num);

	while (num > 0)
	{
		rem = num % 10;	/* take last digit */
		sum += rem;
		num = num / 10;
	}
	printf("Sum of digits = %d\n", sum);

	return (0);
}
