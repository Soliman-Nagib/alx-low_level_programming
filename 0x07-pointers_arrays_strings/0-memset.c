#include <stdio.h>

char* _memset(char* s, char b, unsigned int n) {
    char* p = s;
    while (n > 0) {
        *p = b;
        p++;
        n--;
    }
    return s;
}

int main() {
    char buffer[10];
    char* result = _memset(buffer, 'A', 10);
    
    printf("Memory filled with constant byte: %s\n", result);
    
    return 0;
}

