#include "main.h"

/**
 * _strint - strings int
 * @str: takes char
 * @num: takes int
 * Return: pointer
 */
char *_strint(char str[], int num)
{
	int i, rem, len = 0, n;

	n = num;

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
	return (str);
}
/**
 * main - counts arguments
 * @argc: takes int
 * @argv: takes array of pointers
 * Return: int
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int count;
	char str;
	char *t;
	char *p;

	p = &str;

	count = argc - 1;
	if (count == 0)
	{
		_putchar('0');
	}
	t = _strint(p, count);
	_putchar(*t);
	_putchar('\n');
	return (0);

}
