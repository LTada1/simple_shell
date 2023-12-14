#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 *
 * Return: Always 0.
 */

char *_strncopy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != 0; len++)
	{
		dest[len] = src[len];
		/*dest[len] = '\0';*/
	}
	for ( ; len < n; len++)
	{
		dest[len] = '\0';
	}
	return (dest);
}
