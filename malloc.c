#include<stdio.h>
#include<malloc.h>

int main()
{
    int a = 1;
    int* p = (int*) malloc(4 * sizeof(int));
    printf("the address of p is %d\n",p);
    printf("the address of p is %d\n",p+1);
    printf("the address of p is %d\n",p+2);
    printf("the address of p is %d\n",p+3);
    *p = 1;
    printf("the address of p is %d\n",*p);
    

    int* m = (int*) calloc(5,sizeof(int));
    printf("the uninit number of m is %d\n",*m);// not garbage valuef
} 