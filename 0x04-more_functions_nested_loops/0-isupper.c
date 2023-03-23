#include "main.h"
/**
  *_isupper: returns 1 if c is uppercase 0 oherwise
  *@c: a characte in ASCII code
  *Return; 0 upper 1 otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
