#include "main.h"

/**
 * check_num - recursion loop
 * @n: number to check
 * @counter: number to iterate
 * Return: return 1 or 0
 */
int check_num(int n, int counter)
{
	if (n <= 1)
	{
		return (0);
	}
	if (counter == 1)
	{
		return (1);
	}
	if (n % counter == 0)
	{
		return (0);
	}
	return (check_num(n, (counter - 1)));
}
/**
 * is_prime_number - evaluate prime or not
 * @n: number
 * Return: return 1 for prime and return 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_num(n, (n - 1)));
}
