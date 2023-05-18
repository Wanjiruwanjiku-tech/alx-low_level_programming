#include <stdarg.h>
#include <stdio.h>

int my_printf(const char* format, ...) {
    va_list args;
    int len;

    va_start(args, format);
    len = vprintf(format, args);
    va_end(args);

    return len;
}

int main() {
    my_printf("Hello, world!\n");
    my_printf("The answer is %d\n", 42);
    return 0;
}

