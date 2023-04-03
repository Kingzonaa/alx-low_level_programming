#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
{
*ptr++ = b;
}

return (s);
}
