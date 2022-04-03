#include <stdio.h>

/**
 * main - find the factorial of any number.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, num;

	long fact = 1;

	printf("Enter the number : ");
	scanf("%d", &n);

	num = n;

	if (n < 0)
		printf("No factorial of negative number\n");
	else
	{
		while (n > 1)
		{
			fact *= n;
			--n;
		}

		printf("Factorial of %d = %ld\n", num, fact);
	}

	return (0);
}
