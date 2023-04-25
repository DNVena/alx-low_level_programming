#include <stdio.h>
#define MAXSTRING 80
#include "main.h"

/**
 * main - prints putchar
 * Return: Always (0) Success
 */

int main(void)
{
	int i = 0;
	char num[] = "_putchar";


	for (i = 0; i < MAXSTRING; i++)
	{
		if (num[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(num[i]);
		}
	}
	
	return (0);
}
