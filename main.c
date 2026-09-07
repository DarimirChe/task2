#include "string2.h"

int main() {
    printf("strlen2(\"hello\") = %lld\n\n", strlen2("hello"));

    printf("strnlen_s2(\"hello world!\", 5) = %lld\n\n", strnlen_s2("hello world!", 5));


    printf("puts2(\"hello\"):\n");
    puts2("hello");
    printf("\n");

    char str1[10];
    strncpy2(str1, "hello", 10);
    printf("str1 = <%s>\n\n", str1);

    char str2[20] = "hello";
    strncat2(str2, "world", 10);
    printf("str2 = <%s>\n\n", str2);

    char* dup = strndup2(str2, 5);
    printf("dup = <%s>\n\n", dup);

    printf("strchr2(\"hello\", 'l') = %lld\n\n", strchr2("hello", 'l') - "hello");

    printf("strrchr2(\"hello\", 'l') = %lld\n\n", strrchr2("hello", 'l') - "hello");

    printf("strstr2(\"aabbbbcabcc\", \"abc\") = %lld\n\n", strstr2("aabbbbcabcc", "abc") - "aabbbbcabcc");
    return 0;
}
