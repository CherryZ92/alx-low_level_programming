#include <stdio.h>
/**
  *main- Entry point
  *Return: returns 0 succeess
  */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int)); 
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
