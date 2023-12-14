#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: Variable
 * @src: Variable
 * @n: Variable
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != 0; len++)
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
