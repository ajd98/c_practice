#include <stdio.h>
int main(int argc, char *argv[])
{
    int num[] = {15};
    int *pointer = num;
    printf("num: %d", num[0]);
    printf("pointer: %p", pointer);
    printf("pointer vale: %d", *pointer);
    
    return 0;
}
