#include "main.h"

/**
 * _getline - Read input from stdin
 *
 * Return: The input on a buffer
 *
 */
char *_getline()
{
	int i, rd, buffsize;
	char c, *buffer, *buf;

	buffsize = SIZE;
	c = 0;

	buffer = malloc(buffsize);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; c != EOF && c != '\n'; i++)
	{
		fflush(stdin);
		rd = read(STDIN_FILENO, &c, 1);
		if (rd == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		buffer[i] = c;
		if (buffer[0] == '\n')
			return (enter(buffer));
		if (i >= buffsize)
		{
			buffer = realloc(buffer, (buffsize + 2));
			if (buffer == NULL)
			{
				free(buffer);
				return (NULL);
			}
		}
	}
	buffer[i] = '\0';
	buf = space(buffer);
	free(buffer);
	hashtag_handler(buf);
	return (buf);
}

/**
 * space - Removes whitespaces
 * @str: Input
 * Return: Modifies string
 */
char *space(char *str)
{
	int i, j;
	char *buff;

	buff = malloc(sizeof(char) * (_strlen(str) + 1));
	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}
	for (i = 0; str[i] == ' '; i++)
		;
	for (; str[i + 1] != '\0'; i++)
	{
		buff[j] = str[i];
		j++;
	}
	buff[j] = '\0';
	if (buff[0] == '\0' || buff[0] == '#')
	{
		free(buff);
		return ('\0');
	}
	return (buff);
}

/**
 * enter - Handles newline
 * @str: String
 *
 * Return: Empty string
 */
char *enter(char *str)
{
	free(str);
	return ('\0');
}

/**
 * hashtag_handler - Removes everything after '#'
 * @buff: Input buffer
 * Return: Nothing
 */
void hashtag_handler(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '#' && buff[i - 1] == ' ' && buff[i + 1] == ' ')
		{
			buff[i] = '\0';
		}
	}
}
