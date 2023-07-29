#include "main.h"
/**
 * @list: argument list containing a character to be printed.
 *
 * Return: 1 (done)
 **/
int print_char (va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
