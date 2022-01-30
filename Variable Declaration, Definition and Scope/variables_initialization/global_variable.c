// In C, static and global variables are initialized 
// by the compiler itself. Therefore, they must be 
// initialized with a constant value.
#include <stdio.h>
#include <stdlib.h>
int *p = (int*)malloc(sizeof(p));	// initializer element is not constant
  
int main(void)
{
    *p = 10;
    printf("%d", *p);
}