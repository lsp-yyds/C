#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	printf("minimum int value = %d\n"
		   "maximum int value = %d\n"
		   "size of int in bytes = %zu\n"
		   "size of int in bits = %zu\n",
		   INT_MIN, INT_MAX, sizeof(int), 
		   sizeof(int)*CHAR_BIT);

	/* As per the C standard, unsigned arithmetic can never overflow, 
	rather it is performed modulo the maximum value of the unsigned type + 1, 
	so for unsigned int, arithmetic is performed modulo UINT_MAX + 1 such 
	that UINT_MAX + 1 is 0, and UINT_MAX + 2 is 1, and so on */
	printf("UINT_MAX + 1 = %u\n", UINT_MAX + 1);

	printf("size of unsigned int in bytes = %zu\n"
		   "size of unsigned int in bits = %zu\n",
		   sizeof(unsigned int),
		   sizeof(unsigned int)*CHAR_BIT);
	return 0;
}