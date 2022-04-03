#include <stdio.h>

/**
 * main - Entry point. print message if negative number is entered.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if (num < 0)
		printf("Number is negative\n");
	printf("Value of num is : %d\n", num);
}
