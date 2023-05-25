#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs operation
 * @argc: takes int
 * @argv: takes pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*oprt)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(a, b));
	return (0);
}

