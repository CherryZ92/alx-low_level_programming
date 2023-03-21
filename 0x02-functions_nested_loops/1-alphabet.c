#include "main.h"
/**
  *main-Entry point
  *print_alphabet()-prints the alphabet
  *Return- 0 success
  */
void print_alphabet(void)
{
	int n;
	for (n=97;n<=122;n++)
	{
		_putchar(n);
	}
	_putchar('\n);
	return (0);
}
int main(void)
{
	print_alphabet(void);
	return (0);
}
