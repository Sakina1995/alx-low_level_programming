#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int c, y;
for (c = 0; c <= 98; c++)
{
for (y = c + 1; y <= 99; y++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
if (c == 98 && y == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
