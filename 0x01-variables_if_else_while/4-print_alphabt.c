#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is to print some alphabet 
 *
 * Description: using main function
 * this program prints "the alphabets except e and q
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
