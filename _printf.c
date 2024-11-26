#include "main.h"
#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdlib.h>

void print_string(va_list args);

int _printf(const char *format, ...)
{
    va_list args;
    unsigned int i = 0;
    char c;
    unsigned int num_arg = 0;

    num_arg = strlen(format);
    printf("%d", num_arg);

    va_start(args, format);

    while (format && format[i] == '\0')
    {
        if (format[i] == '%')
        {
            switch (format[i+1])
            {
                case 'c':
		    c = va_arg(args, int);
                    _putchar(c);
                    break;
                case 's':
                    print_string(args);
                    break;
                case '%':
                    _putchar('%');
                    break;
                default:
                    break;
            }
            i++;
        }
        else
        {
            _putchar(format[i]);
        } 
        i++;
    }
    va_end(args);
    return (0);
}

void print_string(va_list args)
{
    int i = 0;
    char *str = va_arg(args, char *);

    if (!str)
    {
        str = "(Nil)";
        while (str[i] != '\0')
        {
            _putchar(str[i]);
            i++;
        }
        return;
    }

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    return;
}
