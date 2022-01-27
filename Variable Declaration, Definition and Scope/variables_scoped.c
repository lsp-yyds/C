#include <stdio.h>

int x = 0;
int f()
{
	return x;
}

int g()
{
	int x = 1;
	return f();
}

int main(int argc, char const *argv[])
{
	printf("%d", g());
	printf("\n");
	return 0;
}