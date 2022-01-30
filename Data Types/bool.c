// The C99 standard for C language supports bool variables. 
// Unlike C++, where no header file is needed to use bool, 
// a header file “stdbool.h” must be included to use bool in C. 
// If we save the below program as .c, it will not compile, 
// but if we save it as .cpp, it will work fine.  
#include <stdbool.h>
#include <stdio.h>

typedef enum { F, T } boolean;

int main(int argc, char const *argv[])
{
	bool arr[2] = { true, false };

	boolean bool1, bool2;
	bool1 = F;
	if (bool1 == F){
		printf("bool1 is false\n");
	}
	else {
		printf("bool1 is true\n");
	}
	bool2 = 2;
	if (bool2 == F){
		printf("bool2 is false\n");
	}
	else {
		printf("bool2 is true\n");
	}

	return 0;
}