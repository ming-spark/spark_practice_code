#include<stdio.h>

int main()
{
/*     int b[5] = {1,2,3,4,5};
    int a[5];
    int i,j;
    for( i = 0, j= 4; i < 5; i++, j--)
    {
        a[i] = b[j];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
       
    }
 */

    int a[5] = {1,2,3,4,5};
    int* p;
    p = (a+4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",*p);
        *p--;
        /* code */
    }
    
}