#include "main.h"

/**
 * main - where program begins
 * @argc: argument number
 * @argv: argument vector
 * return: 0 on succes and -1 on failure
 */

int main(int argc, char **argv)
{
char *lineptr = NULL, *lineptr_copy = NULL, *token;
size_t n = 0;
ssize_t nchars_read;
const char *delim = " \n";
int num_tokens, i;

(void)argc;

while (1)
{
prompt_shell();
if ((nchars_read = getline(&lineptr, &n, stdin)) == -1)
return -1;
if (!(lineptr_copy = malloc(nchars_read)))
{
perror("tsh: memory allocation error");
return -1;
}
_strncopy(lineptr_copy, lineptr);
num_tokens = 1;
for (token = strtok(lineptr, delim); token; token = strtok(NULL, delim))
num_tokens++;
if (!(argv = malloc(sizeof(char *) * num_tokens)))
{
perror("Memory allocation error");
return (-1);
}
tokenize_str(lineptr_copy, delim, argv);
argv[num_tokens - 1] = NULL;
execute_cmd(argv);
for (i = 0; i < num_tokens - 1; i++)
free(argv[i]);
free(argv);
free(lineptr_copy);
}
free(lineptr);
return (0);
}
