#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
char y;
for (c = 0 ; c < 10 ; c++)
putchar(c + '0');
for (y = 'a' ; y <= 'f' ; y++)
putchar(y);
putchar('\n');
return (0);
}
