#include "main.h"

/**
 * main - where program begins
 * @argc: argument number
 * @argv: argument vector
 * return: 0 on succes and -1 on failure
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
size_t len = 0;
size_t nread;
char *str = NULL;

while (1)
{
prompt_shell();
if (argc != 2)
{
return EXIT_FAILURE;
}
nread = getline(&str, &len, stdin);
if (nread < 1 || feof(stdin))
{
printf("\nExiting shell.\n");
break;
}
}
free(str);
return 0;
}
