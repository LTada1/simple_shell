#include "main.h"

char _strncopy(char *str1, char *str2);
char *get_loc(char *command)
{
char *slash = "/";
char *end = "\0";
char *path, *path_copy, *path_token, *file_path;
int command_length, directory_length;
struct stat buffer;

path = getenv("PATH");

if (path)
{
path_copy = strdup(path);
command_length = _strlen(command);
path_token = strtok(path_copy, ":");
while(path_token != NULL)
{
       
directory_length = strlen(path_token);
            
file_path = malloc(command_length + directory_length + 2);         
_strncopy(file_path, path_token);
_strncat(file_path, slash);
_strncat(file_path, command);
_strncat(file_path, end);

if (stat(file_path, &buffer) == 0)
{
free(path_copy);
return (file_path);
}
else
{                
free(file_path);
path_token = strtok(NULL, ":");
}
}
free(path_copy);
if (stat(command, &buffer) == 0)
{
    return (command);
}
return (NULL);
}
return (NULL);
}
