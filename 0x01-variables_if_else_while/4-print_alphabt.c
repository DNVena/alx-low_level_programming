#include <stdio.h>

/**
 * main - prints alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabt[25] = "abcdfghijklmnoprstuvwxyz\n";
	int i = 0;

	while (alphabt[i] > '\0')
	{
		putchar(alphabt[i]);
		i++;
	}
	return (0);
}
