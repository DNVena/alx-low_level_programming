#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: takes pointer
 * @src: takes pointer
 * @n: takes integer
 */
char *_memcpy(char *dest, char *src)
{
	char **pr;
	pr = &src;
	*dest = **pr;
	return (dest);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;
	
	i = 0;
	
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
		       	printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char buffer[98] = "hello";
	char buffer2[98] = "world";


	_memcpy(buffer + 50, buffer2);
	printf(buffer);
	return (0);
}

