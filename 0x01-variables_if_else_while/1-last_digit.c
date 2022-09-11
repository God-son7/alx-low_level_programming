#include <stdlib.h>
#include <time.h>
/**
 * main - print the strings output
 *
 * Description: using the main function
 * this program prints "the stings
 * Return: 0
 */
int main(void)
{
	int n;
	int x;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	x = n % 10;

	if (x > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, x);
	}
	else (x = 0)
	{
		printf("last digits of %d is %d and is 0\n", n , x);
	}
	else (x < 6 and not 0)
	{	
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, x);
        }
	return (0);
