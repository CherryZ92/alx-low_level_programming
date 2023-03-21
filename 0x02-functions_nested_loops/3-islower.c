#include "main.h"
/**
  *_islower - is a function that returns if a char is a lowrcase or not
  *@c: the character in ASCIIcode
  *Return:  1 (lowercase) 0 (uppercase)
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
