#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print(char *, ...);

int main()
{
    print("Hello World");
}

void print(char *c, ...)
{
    char *s;
    va_list lst;
    va_start(lst, c);
    while (*c != '\0')
    {
        if (*c != '%')
        {
            putchar(*c);
            c++;
            continue;
        }
        c++;
        switch (*c)
        {
        case 's':
            fputs(va_arg(lst, char *), stdout);
            break;
        case 'c':
            putchar(va_arg(lst, int));
            break;
        }
    }
}