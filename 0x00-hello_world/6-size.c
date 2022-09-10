#include <stdio.h>
/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "whatever comes to mind
 * Return: 0
 */
int main(void)
{
	char charType;
	int  intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

		        
			    printf("Size of char: %zu bytes\n", sizeof(charType));
			    printf("Size of int: %zu bytes\n", sizeof(intType));
			    printf("Size of long int: %zu bytes\n", sizeof(longintType));
			    printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
			    printf("size of float: %zu bytes\n", sizeof(floatType));
			                    
			    return 0;
}
