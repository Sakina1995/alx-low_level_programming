#include "main.h"
/**
*_isalpha(int c)- for lowercase character
* @c: check the character
* Return: Returns 1 if c is lowercase
* Returns 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 99 && c <= 122))
{
return (1);
}
return (0);
}
