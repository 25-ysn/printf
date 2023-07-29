#include "main.h"


/**
 * print_custom__string - function that outputs a custom strings.
 *
 * @list: argument list containing.
 *
 * Return: int
 */


int print_custom__string(va_list list)

{
	int  i, ret_val, j, len = 0;

	const char *nil_str = "(null)";

	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		for (j = 0; j < 6; j++)
		{
			_putchar(nil_str[j]);
			len++;
		}
		return (len);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < 32) || (str[i] >= 127))
		{
			if ((str[i] >= 0x01 && str[i] <= 0x07) || str[i] == 10)
				len++;
			_putchar('\\');
			_putchar('x');
				len += print_hexadecimal(str[i]);
		}
		else
		{
			ret_val = _putchar(str[i]);

			if (ret_val == -1)
				return (-1);
			len++;
		}
	}
	return (len);
}
/**
 * print_hexadecimal - function that outputs a numbers.
 *
 * @num: asccii code of the character to be converted.
 *
 * Return: int.
 */


int print_hexadecimal(int num)

{
	int x, digit_value, digits = 0, printed_chars = 0;

	char hex_digits[] = "0123456789ABCDEF";

	int temp_num = num;

	if (num < 16)
	{
		_putchar('0');
		digits++;
	}
	else
	{
		while (temp_num != 0)
		{
			temp_num /= 16;
			digits++;
		}
	}
	for (x = digits - 1; x >= 0; x--)
	{
		digit_value = (num >> (4 * x)) & 0xF;
		_putchar(hex_digits[digit_value]);
		printed_chars++;
	}
	return (printed_chars + 2);

}
