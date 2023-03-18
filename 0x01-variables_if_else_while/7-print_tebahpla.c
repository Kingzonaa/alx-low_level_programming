#include <stdio.h>
/*
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{       
char letter = 122;
while (letter >= 97)
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
