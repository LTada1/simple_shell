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

typedef struct info
{
	char **envp;
	int n_tkn;
char **pwd;
	char *prev_pwd;
char *line;
	char *s_name;
	char *path;
	int file;
	int status;
	int pid;
int n_path;
int count;
} info;

int _length(int n);
int _scmp(char *uzi1, char *uzi2);
void handle_dots(char **line, info *ags);
char *_stringcat(char *dest, char *src);
int _print(const char *fmt, ...);
int handle_char(char c);
int handle_string(char *s);
char *_scat(char *dest, char *src, int n);
void handle_number(int n);
int specifier(char c, va_list ags);
int _stringlen(char *s);
char *_stringdup(info *ags, char *uzi);
int _stringcmp(const char *s1, const char *s2, size_t n);
char *_stringtok(char *uzi, const char *dlim);
char *_stringchr(char *s, char c);
void t_string(char *uzi, int num);
int _xeve(info *ags, char *buff);
char *h_realloc(info *agrs, char *buffer, int *buffer_size, int extra,
int max);
void *d_realloc(void *ptr, unsigned int prev, unsigned int curr_size);
int _atoi(char *s);
int _quit_(info *ags);
int input(info *ags, int arw, int *sm);
void free_quit(info *ags);
int tkn(char *line, char *dlim);
int reverse_c(char *s1, char *s2);
int _env(info *ags);
void new_pwd(info *ags);
int _cmd_(info *ags);
ssize_t _readline(info *ags);
void space(char **line, info *ags);
char *_read_env(char **envp, char *env, int length);
int check_input(info *ags);
void check_symbol(char *buffer, char **symbol, info *ags);
char **handle_PWD(info *ags);
int c_dir(info *ags);
char *_malloc(info *ags, int size);
char *mal2(char *line, info *ags, int size);

char *_strncat(char *dest, const char *src);
char *_strncopy(char *str1, char *str2);


int _putchar(char c);
size_t _strlen(const char *str);
void prompt_shell(void);
unsigned int check_delim(char, const char *);
void tokenize_str(char *lineptr_copy, const char *delim, char **argv);
char *_strtok(char *, const char *);
char *_getline();
char *enter(char *str);
char *space(char *str);
void hashtag_handler(char *buff);

#endif /* _MAIN_H_ */
