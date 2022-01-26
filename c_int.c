#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	printf("minimum int value = %d\n"
		   "maximum int value = %d\n"
		   "size of int in bytes = %zu\n"
		   "size of int in bits = %zu",
		   INT_MIN, INT_MAX, sizeof(int), 
		   sizeof(int)*CHAR_BIT);
	return 0;
}