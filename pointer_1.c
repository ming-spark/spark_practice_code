#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26,31, 20 };
    long answer;
    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n",
    sizeof marbles);
    return 0;
}
int sum(int ar[], int n) // 这个数组的大小是？
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
    total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return total;
}
/*这里 sizeof ar 显示不是数组本身，而是指向marble数组首地址的一个指针，而系统中使用的是8字节存储地址*/