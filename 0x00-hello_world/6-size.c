#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: using sizof to print the size of various types.
 *
 *Return: Alawys 0 (success)
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	print("Size of an int: %lu byte(s)\n", sizeof(int));
	 printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	 printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	 printf("Size of a float: %lu byte(s)\n", sizeof(float));
	 return (0);
}