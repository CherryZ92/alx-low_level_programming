#include "main.h"
/**
  *print_alphabet - prints the alphabet in lowercase
  *main - Entry point where we call the funtion
  *Return- 0 success
  */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);

	}
	_putchar('\n);
}
int main(void)
{
	print_alphabet(void);
	return (0);
}
