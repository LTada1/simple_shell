#include "main.h"

/**
 * *_strncat -  concatenates two strings
 * @dest: Varaible
 * @src: Variable
 * @n: Variable
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, const char *src, size_t n)
{
size_t len1, len2;

len2 = _strlen(dest);
for (len1 = 0; len1 < n && src[len1] != '\0'; len1++)
{
dest[len2++] = src[len1];
}
dest[len2] = '\0';
return dest;
}
