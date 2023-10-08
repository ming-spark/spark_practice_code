#include <stdio.h>

#define A(x) x; x; x; x; x; x; x; x; x; x;

int main()
{
    int n = 1;
    A(A(A(printf("%3d\n", n++))));
    return 0;
}