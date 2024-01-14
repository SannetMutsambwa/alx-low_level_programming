#include "main.h"
#include <stdio.h>
/**
* _puts - program prints a string to stdout.
* @str: the string to be printed.
* _putchar prints a new line
*/
void_puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
