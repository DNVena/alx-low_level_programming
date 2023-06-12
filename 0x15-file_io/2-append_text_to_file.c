#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text
 * @filename: takes pointer
 * @text_content: takes pointe
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	 o = open(filename, O_WRONLY, O_APPEND);
	 w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
