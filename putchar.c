#include<unistd.h>
/**
 * putchar - function run program better 
 * @ch: the character to print
 *
 * Return: int
 **/
int _putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
;
}
