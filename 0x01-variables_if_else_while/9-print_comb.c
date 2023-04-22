#include <stdio.h>

/**
 * main - prints numbers
 * Return: Always (0)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a = a + 1)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
