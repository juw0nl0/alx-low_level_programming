#include "main.h"

/**
  * _pow_recursion - function that returns the value of
  * x raised to the power   * of y.
  * @x: first input parameter to the function
  * @y: second parameter to the function
  * Return: the exponetisl power of two number
  *
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x * *y));
	}
}
