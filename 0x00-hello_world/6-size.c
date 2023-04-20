#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(e));

	Return(0);
}