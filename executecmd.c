#include "main.h"

void execute_cmd(char **argv)
{
char *command = NULL, *initial_cmd = NULL;

if (argv)
{

command = argv[0];

initial_cmd  = get_loc(command);

if (execve(initial_cmd, argv, NULL) == -1)
{
perror("Error:");
}
}
}
