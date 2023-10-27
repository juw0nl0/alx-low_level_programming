#include <stdio.h>

/**
  * main - a function/program that prints its name.
  * @argc:Tthe argument count
  * @argv: The argument vector
  * Return: the name of the program
  */
int main(int argc, char *argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
