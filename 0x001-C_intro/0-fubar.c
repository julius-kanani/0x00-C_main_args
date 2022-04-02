#include <stdio.h>

/**
 * main - Entry point.
 * Description: accepts any no. of command line args and prints them out.
 * @argc: argument count. no of args passed to program.
 * @argv: argument vector. a one-dimensional array of strings.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			printf("argv[%d] = %s\n", count,  argv[count]);
	}
	else
		printf("The command had no other args.\n");

	return (0);
}
