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
