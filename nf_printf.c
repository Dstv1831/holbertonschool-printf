#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
  unsigned int i = 0;
  
  va_list(args);
  va_start(args, format);

  while (format != NULL && format[i])
    {
      _putchar();
      i++;
    }
  printf('\n');
  va_end(args);
}
