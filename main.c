#include "string2.h"

int main() {
    printf("strlen2(\"hello\") = %lld\n\n", strlen2("hello"));

    printf("strnlen_s2(\"hello world!\", 5) = %lld\n\n", strnlen_s2("hello world!", 5));


    printf("puts2(\"hello\"):\n");
    puts2("hello");


    return 0;
}
