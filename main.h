#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <unistd.h>

typedef int (*specifier_function)(va_list);

/**
 * struct specifier_mapping - this is a struct.
 *
 * @specifier: ..
 *
 * @function: ..
 */


typedef struct specifier_mapping
{
	char specifier;
	specifier_function function;
} specifier_mapping;

int _putchar(char c);
int ppr_char(va_list args);
int ppr_printstr(va_list args);
int ppr_signedint(va_list args);
int ppr_binary(va_list args);
int ppr_unsignedint(va_list args);
int ppr_octal(va_list args);
int ppr_hexadecimal(va_list args);
int ppr_heXadecimal(va_list args);
int ppr_string(va_list args);
int ppr_pointer(va_list args);
int ppr_reverse(va_list args);
int ppr_rot13ed(va_list args);
int _printf(const char *format, ...);

#endif
