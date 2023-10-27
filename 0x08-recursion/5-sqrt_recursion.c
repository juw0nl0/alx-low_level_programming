#include "main.h"

/**
  * _sqrt_recursion_helper - function that return and helper to main function
  * @guess: initial quess for the sqrt number.
  * @n: input to the sqrt function (real number)
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
	return (_sqrt_recursion_helper(guess + 1));
}

/**
  * _sqrt_recursion - function that returns the natural number.
  * @n: input to the sqrt function (real number)
  * Return: a int square root number
  */
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
