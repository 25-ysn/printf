#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that converts a number into binary
 * @list: argument list containing a character to be printed.
 *
 * Return: 1 (Successful)
 **/
int print_binary(va_list list)
{
unsigned int num = va_arg(list, unsigned int);
int i = 0;
/*fix_1 len */
int len = 0;
unsigned int mask;
int binary_digits = sizeof(num) * 8;
int leading_zero = 1;
if (num < 2)
{
/* fix : num < 2 ==> binary 0 or 1 */
if (num == 0)
_putchar('0');
else
_putchar('1');
return (1);
}
for (i = binary_digits - 1; i >= 0; i--)
{
mask = 1 << i;
if (num & mask)
{
leading_zero = 0;
_putchar('1');
len++;
}
else if (!leading_zero)
{
_putchar('0');
len++;
}
}
return (len);
}
