#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a = 30, b = 40, c = 10;
	// For example no arithmetic calculation happens on 
	// smaller types like char, short and enum. 
	// They are first converted to int or unsigned int, 
	// and then arithmetic is done on them
	char d = (a * b) / c;
	printf("%d", d);

	char x = 0xfb;
	unsigned char y = 0xfb;
	printf("\nx = %c", x);
	printf("\ny = %c", y);
	if (x == y)
		printf("\nSame");
	else
		printf("\nNot Same");

	return 0;
}