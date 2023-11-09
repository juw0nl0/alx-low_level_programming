#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given
  * as a parameter on each element of an array.
  * @array: pointer to an array of integer
  * @size: size of the array
  * @action: a function pointer
  * Return: void (nothing)
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
