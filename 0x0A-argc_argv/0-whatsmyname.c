#include <stdio.h>

/**
  * main - a function/program that prints its name.
  * @argc: is the terminal parameter or argument count
  * @argv: is the termial parameter or argument vector which is an array
  * Return: the name of the program
  */
int main(int argc, char *argv)
{
	printf("%s\n" argv[0]);
	return (0);
}
