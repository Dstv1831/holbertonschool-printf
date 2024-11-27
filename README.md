

![Image Readme](https://github.com/user-attachments/assets/de4aeb3e-2229-4dad-934e-33a990acaab6)

___

# HOLBERTON SCHOOL - CUSTOM FUNCTION _PRINTF()

___

## _printf()

Custom implementation of the C standard library function “printf,” which formats and prints data to standard output. This project offers a lightweight implementation that replicates some functionality while supporting various custom format specifiers

___

## Table of Contents

1. Prototype
2. Format
3. Suppported Specifiers
4. Installation & Usage
5. Examples
6. Limitations
7. Contact

___

## Prototype

_int _printf(const char *format, ...);_

____

## Format

_#include <main.h>_
_int printf(const char *format, ...)_

### Example

_printf("Let's try to printf a simple sentence.\n")_

![Example](https://github.com/user-attachments/assets/687d8188-16e6-48b0-8c9d-590a2caf76d1)

![Output](https://github.com/user-attachments/assets/02bdb52c-52a4-45de-b2ff-1231ed1d02ab)

___

## Supported Specifiers

|  Specfier  |  Output   |   Syntaxis     |
| ---------- | --------- | -------------- |
|     %c     | Character |  (“%c” , ‘D’)  |
|     %s     |  String   | (“%s” , "DND") |
|     %%     | % Symbol  |  (“%%” , ‘%’)  |
|     %i     |  Integer  |  (“%i” , 123)  |
|     %d     |  Integer  |  (“%d” , 456)  |

___

## Installation and Use

* Clone the repository:

_“git clone https://github.com/Dstv1831/holbertonschool-printf.git“_

* Navigate to the project directory:

_cd “Your-repo-name”_

* Include the header file in your main code:

_Include “main.h”_

* Compile the code using gcc:

_“gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.h *.c -o printf”_

* call _printf as you would  the standard printf.

__printf()_

___

## Examples

|                   Input                  |      Output      |   
| ---------------------------------------- | ---------------- |
|     _printf("Character: %c\n", 'X');     |   Character: X   |  
|     _printf("String: %s\n", "Test");     |   String: Test   | 
|     _printf("Decimal: %d\n", 12345);     |  Decimal: 12345  |  
|     _printf("Integer: %i\n", -6789);     |  Integer: -6789  |  
|     _printf("Percent: %%\n")             |    Percent: %    |  

___

## Limitations

This lightweight, easy to use implementation relies on the fact that it does not support all specifiers from the standard printf (e.g., %f, %x, %u), nor the flags, width, length or precision modifiers.
___

## Contact

This README provides a comprehensive overview and is ready for use in your project. Please feel free to contact us regarding any matter (specially about mistakes, recommendations and errors)

Dew - githhub link
Nigel - githhub link
David - githhub link








