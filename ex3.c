#include <stdio.h>

int main()
{
    int age = 10;
    int height = 72;
    printf("I am %d years old.\n");
    printf("I am %d inches tall.\n", height);
    printf("Testing escape sequence \"\\a\": \a \n");
    printf("Testing escape sequence \"\\b\": \b \n");
    printf("Testing escape sequence \"\\f\": \f \n");
    printf("Testing escape sequence \"\\n\": \n \n");
    printf("Testing escape sequence \"\\r\": \r \n");
    printf("Testing escape sequence \"\\t\": \t \n");
    printf("Testing escape sequence \"\\v\": \v \n");
    printf("Testing escape sequence \"\\nnn\": \702 \n");
    printf("Testing escape sequence \"\\xhh\": \xab \n");

    return 0;
}
