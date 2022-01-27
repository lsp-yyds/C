#include <stdio.h>
void f(void);
int x = 15213;
int main(int argc, char const *argv[])
{
	f();
	printf("x = %d\n", x);
	return 0;
}