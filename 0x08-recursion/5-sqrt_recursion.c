#include "main.h"

/**
  * _sqrt_recursion - function that returns the natural
  * square root of a number.
  * _sqrt_recursion_helper - function to help sqrt_recursion
  * @n: input to the sqrt function (real number)
  * @guess: initial quess for the sqrt number.
  * Return: a int square root number
  */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, (guess + 1)));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion_helper(n, 1));
}
