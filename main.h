#ifndef _MAIN_H_
#define _MAIN_H_
#define SIZE 1024


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

void _strcopy(char *dest, const char *src);
char *_stringdup(char *str);
void execute_cmd(char **argv);
char *get_loc(char *command);

/* char  *_strncopy(char *str1, char *str2);
 *
 */
char *_strncat(char *dest, char *src);
char *_strncopy(char *str1, char *str2);
char *_strncat(char *iest, char *src);

int _putchar(char c);
int _strlen(char *str);
void prompt_shell(void);
unsigned int check_delim(char, const char *);
void tokenize_str(char *lineptr_copy, const char *delim, char **argv);
char *_strtok(char *, const char *);
char *_getline();
char *enter(char *str);
char *space(char *str);
void hashtag_handler(char *buff);

#endif /* _MAIN_H_ */
