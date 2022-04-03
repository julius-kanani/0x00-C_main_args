#include <stdio.h>

/**
 * main - find product of digits of any number.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num, prod = 1, rem;

	printf("Enter the number : ");
	scanf("%d", &num);

	while (num > 0)
	{
		rem = num % 10;	/* last digit. */
		if (rem == 0)
		{
			num /= 10;
			continue;
		}

		prod *= rem;
		num /= 10;	/* skip last digit */
	}

	printf("Product of digits = %d\n", prod);

	return (0);
}
