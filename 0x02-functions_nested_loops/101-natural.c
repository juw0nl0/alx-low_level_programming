 #include <stdio.h>

/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */

int main(void)
{
	int m = 0;
	int r = 0;

	while (m < 1024)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			r += m;
		}
		m += 1;
	}
	printf("%d\n", r);
	return (0);
}
