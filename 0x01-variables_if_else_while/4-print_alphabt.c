#include <stdio.h>
/*
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{	
char letter = 97;
while (letter <= 122)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
