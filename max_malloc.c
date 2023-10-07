#include <stdio.h>
#include <stdlib.h>
int main()
{
    char*p;
    const unsigned k= 1024*1024*1024*1.2;
    printf("%x\n",k);
    p= (char *)malloc( k );
    if( p!=NULL )
    printf("OK");
    else
    printf("error");
    return 0;
}