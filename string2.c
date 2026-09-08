#include "string2.h"

size_t strlen2(const char* str) {
    const char* end = str;

    while (*end != '\0') {
        end++;
    }

    return end - str;
}

size_t strnlen_s2(const char* str, size_t strsz) {
    if (str == NULL) {
        return 0;
    }

    const char* end = str;

    while (*end != '\0' && strsz > 0) {
        end++;
        strsz--;
    }

    return end - str;
}

int puts2(const char* str) {
    int status = 0;

    while (*str != '\0') {
        status = putchar(*str);
        if (status == EOF) {
            return 0;
        } 
        str++;
    }

    putchar('\n');
    return 1;
}

char* strncpy2(char* dest, const char* src, size_t count) {
    char* ptr = dest;

    while (*src != '\0' && count > 0) {
        *ptr = *src;
        ptr++;
        src++;
        count--;
    }
    while (count > 0) {
        *ptr = '\0';
        ptr++;
        count--;
    }
    return dest;
}

char* strncat2(char* dest, const char* src, size_t count) {
    char* ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }

    while (count > 0) {
        *ptr = *src;
        ptr++;
        src++;
        count--;
    }

    ptr++;
    *ptr = '\0';
    return dest;
}

char* strndup2(const char *str, size_t size) {
    size_t len = 0;

    while (str[len] != '\0' && len < size) {
        len++;
    }

    char* dup = (char*) calloc(len + 1, sizeof(char));

    if (dup == NULL) {
        return NULL;
    }

    memcpy(dup, str, len);
    // dup[len] = '\0';

    return dup;
}

const char* strchr2(const char* str, int ch) {
    while (*str != '\0') {
        if (*str == ch)
            return str;
        str++;
    }
    return NULL;
}

const char* strrchr2(const char* str, int ch) {
    const char* lastCharPtr = NULL;
    while (*str != '\0') {
        if (*str == ch)
            lastCharPtr = str;
        str++;
    }
    return lastCharPtr;
}

const char* strstr2(const char* str, const char* substr) {
    const char* ptr = substr;

    while (*str != '\0') {
        if (*str == *ptr) {
            ptr++;
        } else {
            ptr = substr;
        }

        if (*ptr == '\0') {
            return str - (ptr - substr) + 1;
        }

        str++;
    }
    return NULL;
}

ssize_t getline2(char** lineptr, size_t* n, FILE* stream) {
    if (lineptr == NULL || n == NULL || stream == NULL) {
        return -1;
    }

    if (*lineptr == NULL) {
        *lineptr = (char*) calloc(16, sizeof(char));
        *n = 16 * sizeof(char);
        if (lineptr == NULL) {
            return -1;
        }
    }

    int c = 0;
    int index = 0;

    while ((c = fgetc(stream)) != '\n' && c != EOF) {
        (*lineptr)[index] = c;
        
        if (index * sizeof(char) > *n) {
            char* tmpPtr = (char*) realloc(*lineptr, (*n) * 2);

            if (tmpPtr == NULL) {
                break;
            }

            *lineptr = tmpPtr;
            (*n) *= 2;
        }

        index++;
    }

    if (index == 0 && c == EOF) {
        return -1;
    }

    (*lineptr)[index] = '\0';
    return index;
}
