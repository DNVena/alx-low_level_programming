#include "main.h"

/**
 * _mul - multiplies 2 numbers
 * @a: takes int
 * @b: takes int
 * Returns: int
 */
int _mul(int a, int b)
{
	int mul;
	mul = a * b;
	return (mul);
}

/**
 * _strlen - finds the length of a string
 * @s: takes a character pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * main - runs  _mul function
 * @argc: takes int
 * @argv: takes pointer to array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int num1, num2;
	char t[] = "Error";
	char *c = t;
	int len1 = _strlen(*argv[1]);
	int len2 = _strlen(*argc[2]);

	for (i = 0; i < len1; i++)
	{
		num1 = num1 + (

	if (argc < 2)
	{
		_putchar(*c);
		return (1);
	}
	else
	return (_mul(*argv[1], *argv[2]));
}
