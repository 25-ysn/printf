#include "main.h"
/**
* printf function to make the code run
*
* @format: the format string to print
* Return: int(number of characters printed )
*/
int _printf(const char *format, ...)
{
int size = 0;
/*declare list of arguments variables*/
va_list args;
/*point the list to the first fixed variable*/
va_start(args, format);
size = format_controller(format, args);
/*clean up ressources*/
va_end(args);
return (size);
}
