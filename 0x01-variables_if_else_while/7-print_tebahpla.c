#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[27] = "zyxwvutsrqponmlkjihgfedcba\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
