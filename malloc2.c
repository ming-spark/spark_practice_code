#include<stdio.h>
#include<malloc.h>

void printfhelloworld(){
    printf("Hello World\n");
}
int *Add(int* a,int *b){
    int c = *a + *b;
    return &c;
}

int main(){
    int a = 2, b = 3;
    int* c = Add(&a, &b);
    printfhelloworld();
    printf("Sum = %d\n",*c);


}