#include <stdio.h>

/**
 * main - find whether a year is leap or not.
 *
 * Return: Always 0.
 */

int main(void)
{
	int year;

	printf("Enter a year : ");
	scanf("%4d", &year);

	if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
		printf("%4d is a leap year\n", year);
	else
		printf("%4d is not a leap year\n", year);

	return (0);
}
