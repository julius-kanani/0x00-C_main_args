#include <stdio.h>

/**
 * main - program to find largest number from three given numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, b, c, large;

	printf("Enter three numbers (use space as separator) : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
			large = a;
		else
			large = c;
	}
	else
	{
		if (b > c)
			large = b;
		else
			large = c;
	}

	printf("largest number is %d\n", large);

	return (0);
}


