#include<stdio.h>

#define Mysize(value) (char*)(&value+1)-(char*)(&value)
//#define Mysize(value) (&alue+1)-(&value)

int main()
{
    int a;
    float b;
    double c;

    printf("size is %d\n",Mysize(a));
    printf("size is %d\n",Mysize(b));
    printf("size is %d\n",Mysize(c));
    return 0;
}