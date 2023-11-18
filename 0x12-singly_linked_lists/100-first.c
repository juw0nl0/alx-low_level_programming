#include <stdio.h>

/**
 * b4_main - function that print a string before  executing  main
 * Return: no return.
 */
void __attribute__((constructor)) b4_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
