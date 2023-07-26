#include "main.h"

/**
<<<<<<< HEAD
 * _cnv_reverse - reverses string
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_reverse(va_list args, __attribute__ ((unused)) char flags)
=======
 * _cnv_reverse - reverses string.
 *
 * @args: va_list arguments.
 *
 * @flags: flag.
 *
 * Return: number of characters printed.
 */


int _cnv_reverse(va_list args, __attribute__ ((unused)) char flags)

>>>>>>> 32f078e35ba5786118ae36a88e86827b2da8a0af
{
	char *str = va_arg(args, char *);
	int char_count, j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	char_count = j;
	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(str[j]);
	return (char_count);
}
