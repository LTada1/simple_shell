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

/**
 * main - where program begins
 * @argc: argument number
 * @argv: argument vector
 * return: 0 on succes and -1 on failure
 */

#include "main.h"

int main(int argc, char **argv)
{
char *lineptr = NULL, *lineptr_copy = NULL;
size_t n = 0;
ssize_t nchars_read;
const char *delim = " \n";
int num_tokens = 0;
char *token;
int i;

(void)argc;
  
while (1)
{
prompt_shell();
nchars_read = getline(&lineptr, &n, stdin);
if (nchars_read == -1) {
return -1;
}
lineptr_copy = malloc(sizeof(char) * nchars_read);
if (lineptr_copy == NULL)
{
perror("tsh: memory allocation error");
return -1;
}
_strncopy(lineptr_copy, lineptr);
token = strtok(lineptr, delim);
while (token != NULL) {
num_tokens++;
token = strtok(NULL, delim);
}
num_tokens++;
argv = malloc(sizeof(char *) * num_tokens);
if (argv == NULL)
{
perror("Memory allocation error");
return -1;
}
tokenize_str(lineptr_copy, delim, argv);
argv[num_tokens - 1] = NULL;
for (i = 0; i < num_tokens - 1; i++) {
free(argv[i]);
}
free(argv);
free(lineptr_copy);
free(lineptr);
}
return (0);
}
