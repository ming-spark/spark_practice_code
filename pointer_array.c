#include<stdio.h>

int main()
{
    int B[2][3]= {{1,2,3},
                  {4,5,6}};
    printf("%d\n",B);
    printf("%d\n",B+1);
    printf("%d\n",*(B[0]+1));
/*具体到一层的B[0]可以默认为一层的指针，只需要在解引用一次即可*/
}