#include "hello.h"

int main() {
    printf("hello world\n");
}

char *myStrcpy(char *dest, const char *src) {
    return NULL;
}

size_t myStrlen(const char *string) {

    int i;
    for( i= 0; string[i]!='\0' ; i++)
    ;
    return i;
}

char *myStrcat(char *dest, const char *src) {
    return NULL;
}

int myStrcmp(const char *string1, const char *string2) {
    return 0;
}
