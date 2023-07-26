#include "main.h"


/**
<<<<<<< HEAD
 * _cnv_unsignedint - print an unsigned number
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int -cnv_unsignedint(va_list args, __attribute__ ((unused)) char flags)
=======
 * _cnv_unsignedint - print an unsigned number.
 *
 * @args: va_list arguments.
 *
 * @flags: flag.
 *
 * Return: number of characters printed.
 */


int _cnv_unsignedint(va_list args, __attribute__ ((unused)) char flags)
>>>>>>> 32f078e35ba5786118ae36a88e86827b2da8a0af
{
	unsigned int n = va_arg(args, unsigned int);
	int j, char_count = 0;
	char arr[15];

	if (n == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}

	while (n > 0)
	{
		arr[char_count] = (n % 10) + '0';
		n /= 10;
		char_count++;
	}

	arr[char_count] = '\0';

	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
