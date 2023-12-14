#include "main.h"

/**
 * _stringdup - duplicate string
 * @str: string for duplicate
 *
 * return: string
 */

char *_stringdup(char *str)
{
size_t len = strlen(str) + 1;
char *duplicate = malloc(len);

if (duplicate != NULL)
{
_strncopy(duplicate, str);
}
return (duplicate);
}
