#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number.
  * @n: input parameter to the function of type int.
  * Return: an int value
  *
  */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
