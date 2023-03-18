#include <stdio.h>
/*
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{   
int i;
int j;

for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar('0' + i);
putchar(',');
putchar(' ');
putchar('0' + j);
if (j != 9 || i != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
