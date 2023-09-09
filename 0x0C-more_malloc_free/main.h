#ifndef _MAIN_H_
#define _MAIN_H_

int is_digit(char *s);
int _strlen(char *s);
void errors(void);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
