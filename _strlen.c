#include <stdio.h>
#include "main.h"

/**
 * _strlen - Determines length of string
 * @str: Pointer to string
 *
 * Return: Length of str
 */

int _strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
