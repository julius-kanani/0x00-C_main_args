#include <stdio.h>

/**
 * main - convert binary to a decimal number.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num, j, numsave, rem, d, dec;

	dec = 0;
	j = 1;

	printf("Enter the number in binary : ");
	scanf("%d", &num);

	numsave = num;

	while (num > 0)
	{
		rem = num % 10;	/* take last digit */
		d = rem * j;
		dec += d;
		j *= 2;
		num /= 10;	/* skip last digit */
	}

	printf("Binary number = %d, Decimal number = %d\n", numsave, dec);

	return (0);
}
