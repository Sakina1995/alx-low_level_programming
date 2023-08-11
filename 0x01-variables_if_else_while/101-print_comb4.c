#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int c, y, z;
for (c = '0' ; c < '9' ; c++)
{
for (y = c + 1 ; y <= '9' ; y++)
{
for (z = y + 1 ; z <= '9' ; z++)
{
if ((c != y) != z)
{
putchar(c);
putchar(y);
putchar(y);
if (c == '7' && y == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
