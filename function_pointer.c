#include <stdio.h>

int Max(int,int);

int main()
{
    int (*p)(int , int);
    int a, b, c;
    p = Max;
    printf("please enter a and b:");
    scanf("%d %d", &a, &b);
    c = (*p)(a, b);
    printf("a = %d\n b = %d\n max = %d\n", a, b, c);
    return 0;
}
int Max(int x, int y)
{
    int z;
    if (x > y)
    {
        z = x;
        /* code */
    }
    else
    {
        z = y;
    }
    return z;
}