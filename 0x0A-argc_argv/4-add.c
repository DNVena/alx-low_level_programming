#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - runs _add function
 * @argc: takes int
 * @argv: takes array of pointers
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
