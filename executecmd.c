#include "main.h"

Void exec_cmdecmd(char **argv)
{
char *command = NULL, *intial_cmd = NULL;

if (argv)
{

command = argv[0];

initial_cmd  = get_loc(command);

if (execve(actual_cmd, argv, NULL) == -1)
{
perror("Error:");
}
}
}
