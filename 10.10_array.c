#include<stdio.h>

int main()
{
    int arr[10] = {0};
    int num;
    int sum;
    int begin = 0;
    int end;
    int cursum = 0;
    printf("please input array numble\n");

    scanf("%d", &num);

    printf("please input array value \n");

    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    printf("please sum you want\n");

    scanf("%d", &sum);

    end = num -1;
    while (begin < end)
    {
        cursum = arr[begin] + arr[end];
        if(cursum == sum)
        {
            printf("the numble is %d and %d",arr[begin],arr[end]);
            break;
            /* code */
        }
        else
        {
            if(cursum < sum)
                begin++;
            else
                end--;
        }
        /* code */
    }
    


}