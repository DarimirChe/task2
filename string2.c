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
