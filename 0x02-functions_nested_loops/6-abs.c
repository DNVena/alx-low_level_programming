#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @i: takes integer value
 * Return: Always 0
 */

int _abs(int i)
{
	int num;

	if (i < 0)
	{
		num = i * -1;
		return (num);
	}
	else if (i == 0)
	{
		num = i * 0;
		return (num);
	}
	else
	{
		num = i * 1;
		return (num);
	}
}
