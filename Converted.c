#include <stdlib.h>
#include "helper.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


/**
 * printConverted - prints string.
 *
 * @str: strings.
 *
 * @len: initial index.
 *
 * Return: returns len.
 */


int printConverted(char *str, int len)

{
	int length = len;

	while (str[length] != '\0')
		length++;

	write(1, &str[len], length - len);
	return (length - len);
}
