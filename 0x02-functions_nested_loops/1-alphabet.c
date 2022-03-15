#include <stdio.h>
/**
 * main -Entry point
 *
 *Return: Always 0 (success/correct)
 */

void main(void)
{
char ch;
clrscr();
for (ch = ‘a’; ch <= ‘z’; ch++)
{
putchar(ch);
putchar (‘\n’);
}
getch();
}
