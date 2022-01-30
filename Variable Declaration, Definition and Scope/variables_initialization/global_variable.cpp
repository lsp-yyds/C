#include <stdio.h>
#include <stdlib.h>
int *p = (int*)malloc(sizeof(p));
  
int main(void)
{
    *p = 10;
    printf("%d", *p);
}