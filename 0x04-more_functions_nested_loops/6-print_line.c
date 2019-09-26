#include "holberton.h"
/**
 * print_line - entry point
 * @n: Integer
 * Description: draws a straight line in the terminal.
 * Return: void
 */
void print_line(int n)
{
int i;

if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

