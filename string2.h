#include <stdio.h>

#ifndef STRING2_H
#define STRING2_H

size_t strlen2   (const char* str);
size_t strnlen_s2(const char* str, size_t strsz);
int    puts2     (const char* str);
char*  strncpy2  (char* dest, const char* src, size_t count);
char*  strncat2  (char* dest, const char* src, size_t count);
// char*  strndup2  (const char *str, size_t size);
char*  strchr    (const char* str, int ch);

#endif /* STRING2_H */
