#include "main.h"
/**
*main - check the code
*print_alphabet_x10 - prints 10 times
*/
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
