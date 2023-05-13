#include "main.h"

/**
 * main - counts arguments
 * @argc: takes int
 * @argv: takes array of pointers
 * Return: int
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int count;

	count = *(&argv + 1) - argv;
	return (count);
}
