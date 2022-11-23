#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{

int num, i;
for (num = 0; num <= 9; num++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}

_putchar('\n');
}

return (0)
}
