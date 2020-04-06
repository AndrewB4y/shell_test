#ifndef _SHELLBY_H_
#define _SHELLBY_H_

/* Libraries */
#include <stdlib.h>
#include <string.h>

/* Structures */
/* Prototypes */
int _strcmp(const char *s1, const char *s2);
char **store_paths(char **envp);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif  /* _SHELLBY_H_ */
