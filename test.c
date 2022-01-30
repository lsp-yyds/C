#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int x=-1;
    int y;
    y = ~0;
    if(x == y)
        printf("same\n");
        if(x==INT_MAX) printf("INT_MAX\n");
        if(x==UINT_MAX) printf("UINT_MAX\n");
    else
        printf("not same");
    return 0;
}