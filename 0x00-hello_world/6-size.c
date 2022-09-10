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
	       int intType;
	       long int longintType;
	       long long int longlongintType;
	       float floatType;

		        
                printf("Size of a char: %d byte(s)\n", sizeof(charType));
                printf("Size of an int: %d byte(s)\n", sizeof(intType));
		printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
		printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintType));
		printf("size of a float: %d byte(s)\n", sizeof(floatType));
			                    
	        return 0;
}
