#include "hello.h"

int main() {
    printf("hello world\n");
}

char *myStrcpy(char *dest, const char *src) {
    return NULL;
}

size_t myStrlen(const char *string) {
	int cnt = 0;
	while(string[cnt] != '\0')
	{
		cnt++;
	}
    return cnt;
}

char *myStrcat(char *dest, const char *src) {
    return NULL;
}

int myStrcmp(const char *string1, const char *string2) {
    return 0;
}
