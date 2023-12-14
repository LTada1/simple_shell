#include "main.h"

/**
 * tokenize_str - where program begins
 * @delim: delimeter
 * @argv: argument vector
 * @lineptr_copy: str
 * return: 0 on succes and -1 on failure
 */

void tokenize_Str(char *lineptr_copy, char *delim, char **argv)
{
char *token;
int i;

token = strtok(lineptr_copy, delim);
for (i = 0; token != NULL; i++) {
argv[i] = malloc(sizeof(char) * (strlen(token) + 1));  // +1 for the null terminator
_strcpy(argv[i], token);
token = strtok(NULL, delim);
}

/**
 * main - where program begins
 * @argc: argument number
 * @argv: argument vector
 * return: 0 on succes and -1 on failure
 */

#include "main.h"

int main(int ac __attribute__((umused)), char **argv)
{
char *prompt = "(Eshell) $ ";
char *lineptr = NULL, *lineptr_copy = NULL;
size_t n = 0;
ssize_t nchars_read;
const char *delim = " \n";
int num_tokens = 0;
char *token;
int i;
  
while (1)
{
printf("%s", prompt);
nchars_read = getline(&lineptr, &n, stdin);
if (nchars_read == -1)
{
return (-1);
}
lineptr_copy = malloc(sizeof(char) * nchars_read);
if (lineptr_copy == NULL)
{
perror("tsh: memory allocation error");
return (-1);
}
_strcopy(lineptr_copy, lineptr);
token = strtok(lineptr, delim);
while (token != NULL)
{
num_tokens++;
token = strtok(NULL, delim);
}
num_tokens++;
argv = malloc(sizeof(char *) * num_tokens);
token = tokenize_tring(lineptr_copy, delim, argv);
argv[i] = NULL;
execute_cmd(argv);
}
free(lineptr_copy);
free(lineptr);
return (0);
}
