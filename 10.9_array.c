#include <stdio.h>

int main()
{
    char array[5][5] = {{'a','b','c','d','e'},{'f','g','h','g','k'}};
  //  int* p = (int*)array[1];
    char* p = (int*)array[1];

    printf("%c\r\n",*(++p));

    
}