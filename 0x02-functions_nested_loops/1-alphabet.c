#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function prints alphabets
 * Return void
 */

void print_alphabet(void)
{
	char num;

	for (num = 'a'; num <= 'z'; num++)
	{
		putchar(num);
	}
	putchar('\n');
}
