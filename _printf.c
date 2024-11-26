#include "main.h"
#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdlib.h>



/** print_string - prints an integer type argument ("int")
 * @args: list of all types of arguments passed
 * to the function
 * Return: len.
 */
int print_string(va_list args);

/** _printf - prints an integer type argument ("int")
 * @format: list of all types of arguments passed
 * to the function
 * Return: len.
 */
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
case '\0':
return (-1);
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
return (count);
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