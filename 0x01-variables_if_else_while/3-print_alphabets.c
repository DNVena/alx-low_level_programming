#include <stdio.h>

/**
 * main - prints alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bt[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;

	while (bt[i] > '\0')
	{
		putchar(bt[i]);
		i++;
	}
	return (0);
}
