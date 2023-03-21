#include "main.h"
/**
  *print_alphabet_x10 - Prints alphabet in lowercase 10 times
  *Return - always 0 (success)
  */
void print_alphabet_x10(void)
{
	int n;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
