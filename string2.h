#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#ifndef STRING2_H
#define STRING2_H

size_t      strlen2   (const char* str);
size_t      strnlen_s2(const char* str, size_t strsz);
int         puts2     (const char* str);
char*       strncpy2  (char* dest, const char* src, size_t count);
char*       strncat2  (char* dest, const char* src, size_t count);
char*       strndup2  (const char *str, size_t size);
const char* strchr2   (const char* str, int ch);
const char* strrchr2  (const char* str, int ch); 
const char* strstr2   (const char* str, const char* substr);
ssize_t     getline2  (char** lineptr, size_t* n , FILE* stream);

#endif /* STRING2_H */
