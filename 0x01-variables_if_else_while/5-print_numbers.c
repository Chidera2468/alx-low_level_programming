#include<stdio.h>
/**
 * main-entry point*
 * Description: print 0 to 10 in new line*
 * Return: Always 0 (success)
 */
int main(void)
{ char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{putchar(ch); }
	putchar('\n');
	return (0); }
