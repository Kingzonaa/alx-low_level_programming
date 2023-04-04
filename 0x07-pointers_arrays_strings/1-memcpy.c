/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_dest = dest;
char *ptr_src = src;

while (n--)
{
*ptr_dest++ = *ptr_src++;
return (0);
}
