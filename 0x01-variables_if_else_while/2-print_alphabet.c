#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main() {
    char alp;
    for (alp='a';alp<='z';alp++)
    {
	    putchar(alp);
    }
    putchar('\n');
    return 0;
}
