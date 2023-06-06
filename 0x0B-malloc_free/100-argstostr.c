#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: takes integer
 * @av: takes char
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int i = 0, j = 0, k = 0, m, size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		m = 0;
		while (av[i][m])
		{
			size++;
			m++;
		}
		size++;
		i++;
	}
	args = malloc(sizeof(char) * size + 1);
	if (args == NULL)
	{
		return (NULL);
	}
	while (j < ac)
	{
		m = 0;
		while (av[j][m])
		{
			args[k] = av[j][m];
			m++;
			k++;
		}
		args[k] = '\n';
		k++;
		j++;
	}
	args[k] = '\0';
	return (args);
}
