#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a, b, d;
	float e;
	char c;

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));

	return (0);
}
