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
	int intType;
	float floatType;
	long int longinttype;
	char charType;
	long long int longlonginttype;

		        
			    printf("Size of int: %zu bytes\n", sizeof(intType));
			    printf("Size of float: %zu bytes\n", sizeof(floatType));
			    printf("Size of long int: %zu bytes\n", sizeof(longinttype));
			    printf("Size of char: %zu byte\n", sizeof(charType));
			    printf("size of long long int: %zu bytes\n", sizeof(longlonginttype));
			                    
			    return 0;
}
