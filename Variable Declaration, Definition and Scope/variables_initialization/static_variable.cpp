#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	static int* p = (int*)malloc(sizeof(p));
	*p = 10;
	printf("%d", *p);
	return 0;
}