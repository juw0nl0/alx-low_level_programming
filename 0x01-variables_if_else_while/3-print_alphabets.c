#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main() {
	char alp, ALP;
	for (alp='a';alp<='z';alp++)
	{
		putchar(alp);
	}
	for (ALP='A';ALP<='Z';ALP++)
	{
		putchar(ALP);
	}
	putchar('\n');
	return 0;
}
