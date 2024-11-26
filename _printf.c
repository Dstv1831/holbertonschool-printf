#include "main.h"
#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdlib.h>

int print_string(va_list args);

int _printf(const char *format, ...)
{
    va_list args;
    unsigned int i = 0, count = 0;
    char c;
    
    if (!format)
    {
        return (-1);
    }

    va_start(args, format);

    while (format && format[i] != '\0')
    {
        if (format[i] == '%')
        {
            switch (format[i+1])
            {
                case 'c':
                    c = va_arg(args, int);
                    _putchar(c);
                    count++;
                    i += 2;
                    break;
                case 's':
                    count += print_string(args);
                    i += 2;
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    i += 2;
                    break;
                default:
                    _putchar('%');
                    count++;
                    i++;
                    break;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
            i++;
        }
    }
    va_end(args);
    return (count = 5);
}

int print_string(va_list args)
{
    unsigned int i = 0, count = 0;
    char *str = va_arg(args, char *);

    if (!str)
    {
        str = "(null)";
    }

    while (str[i])
    {
        _putchar(str[i]);
        count++;
        i++;
    }
    return (count);
}
