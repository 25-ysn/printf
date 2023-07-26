#include "main.h"


/**
<<<<<<< HEAD
 * _cnv_signedint - prints a number
 * @args: va_list arguments
 * @flags: flag
 * Return: number of characters printed
 */
int _cnv_signedint(va_list args, __attribute__ ((unused)) char flags)
=======
 * _cnv_signedint - prints a number.
 *
 * @args: va_list arguments.
 *
 * @flags: flag.
 *
 * Return: number of characters printed.
 */

int _cnv_signedint(va_list args, __attribute__ ((unused)) char flags)

>>>>>>> 32f078e35ba5786118ae36a88e86827b2da8a0af
{
	int n = va_arg(args, int);
	int j, char_count = 0, negative = 0;
	char arr[15];
	unsigned int x;

	if (n == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}

	if (n < 0)
	{
		x = -(n);
		negative = 1;
	}
	else
		x = n;

	while (x > 0)
	{
		arr[char_count] = (x % 10) + '0';
		x /= 10;
		char_count++;
	}

	if (negative == 1)
	{
		arr[char_count] = '-';
		char_count += 1;
	}

	arr[char_count] = '\0';

	for (j = char_count - 1 ; j >= 0; j--)
		_putchar(arr[j]);

	return (char_count);
}
