#include <stdio.h>
#include <stdarg.h>

void printStrings(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        char* str = va_arg(args, char*);
        printf("%s ", str);
    }

    va_end(args);
    printf("\n");
}

int main() {
    printStrings(3, "Hello", "World", "!");
    printStrings(4, "This", "is", "a", "test");
    
    return 0;
}
