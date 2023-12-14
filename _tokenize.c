#include "main.h"

/**
 * tokenize_str - where program begins
 * @delim: delimeter
 * @argv: argument vector
 * @lineptr_copy: str
 * return: 0 on succes and -1 on failure
 */

void tokenize_str(char *lineptr_copy, const char *delim, char **argv) {
char *token;
int i;

token = strtok(lineptr_copy, delim);
for (i = 0; token != NULL; i++)
{
argv[i] = malloc(sizeof(char) * (strlen(token) + 1));
_strncopy(argv[i], token);
token = strtok(NULL, delim);
}
argv[i] = NULL;
}
