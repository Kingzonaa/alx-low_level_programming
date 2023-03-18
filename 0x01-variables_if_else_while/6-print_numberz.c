#include <stdio.h>
/*
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{       
int count = 0;
while (count <= 9)
{
putchar('0' + count);
count++;
}
putchar('\n');
return (0);
}
