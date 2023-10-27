#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all arguments it receives
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = 0;
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] >= '0' && arg[j] <= '9')
			{
				num = num * 10 + (arg[j] - '0');
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
