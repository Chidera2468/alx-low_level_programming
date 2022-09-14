#include"main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 * */
int pess_last_digit(int n)
{
	inta a;
	if (n < o)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_puchar(a + '0');
	return (a);
}
		
