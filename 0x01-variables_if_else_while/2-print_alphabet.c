#include <stdio.h>
/*
 * main - alphabet in lower cases
 *
 * Return: 0
*/
int main(void)
{
char letter = 97;
while (letter <= 122) {
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
