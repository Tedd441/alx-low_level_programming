#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Retur:0 (success)
 */
int main(void)
{
	char s[]="_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}

	putchar(10);

	return (0);
}
