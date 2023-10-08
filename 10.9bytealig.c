#include<stdio.h>

typedef struct data
{
    double i;
    int k[5];
    char c;
}abc;
typedef union u1
{
    char b;
    int e;
    short d;
}u2;
  
int main()
{
    printf("%d\n",sizeof(abc));
    printf("%d\n",sizeof(u2));
    return 0;

}
