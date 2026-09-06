#include "string2.h"

int main() {
    printf("strlen2(\"hello\") = %lld\n\n", strlen2("hello"));

    printf("strnlen_s2(\"hello world!\", 5) = %lld\n\n", strnlen_s2("hello world!", 5));


    printf("puts2(\"hello\"):\n");
    puts2("hello");
    printf("\n");

    char str1[10];
    strncpy2(str1, "hello", 10);
    printf("str1 = <%s>\n", str1);

    return 0;
}
