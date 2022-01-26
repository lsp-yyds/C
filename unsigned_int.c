#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("UINT_MAX + 1 = %u\n", 
		UINT_MAX + 1);
	printf("size of unsigned int in bytes = %zu\n", 
		sizeof(unsigned int));
	printf("size of unsigned int in bits = %zu\n",
		sizeof(unsigned int)*CHAR_BIT);
	return 0;
}