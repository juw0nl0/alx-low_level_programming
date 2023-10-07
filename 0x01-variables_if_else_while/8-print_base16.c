#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int x;
	char alp;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (alp = 'a'; alp < 'g'; alp++)
	{
		putchar (alp);
	}
	putchar ('\n');
	return (0);
}
