#include <stdio.h>
#include "main.h"

/**
 * _strlen - Determines length of string
 * @str: Pointer to string
 *
 * Return: Length of str
 */

size_t _strlen(const char *str)
{
size_t len = 0;
while (str[len] != '\0')
len++;
return len;
}
