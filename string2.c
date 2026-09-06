#include "string2.h"

size_t strlen2(const char* str) {
    const char* end = str;

    while (*end != '\0') {
        end++;
    }

    return end - str;
}

int puts2(const char* str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
    return 1;
}
