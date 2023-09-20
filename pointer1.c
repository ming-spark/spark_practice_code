#include<stdio.h>

void print(char* C)
{
    int i = 0;
    while (C[i] != '\0')
    {
        printf("%c",C[i]);
        i++;
        /* code */
    }
}
int main()
{
    char C[20]="conti";
    print(C);
}