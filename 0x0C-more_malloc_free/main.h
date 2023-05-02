#ifndef main_header_file_moremalloc_H
#define main_header_file_moremalloc_H

#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);

#endif /* main_header_file_moremalloc_H */
