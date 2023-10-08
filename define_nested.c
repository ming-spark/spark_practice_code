#include <stdio.h>

#define B P, P, P, P, P, P, P, P, P, P
#define P L, L, L, L, L, L, L, L, L, L
#define L I, I, I, I, I, I, I, I, I, I
#define I printf("%3d\n", i++)
#define N printf("n")

int main()
{
    int i = 1;
    B;
    return 0;
}