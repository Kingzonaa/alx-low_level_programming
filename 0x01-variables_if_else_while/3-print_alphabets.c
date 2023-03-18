#include <stdio.h>
/*
 * main - print a line using puts
 *
 * Return: 0
*/
int main(void)
{
char letter = 97;
while (letter <= 122)
{
putchar(letter);
letter++;
}
putchar('\n');
letter = 65;
while (letter <= 90)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
