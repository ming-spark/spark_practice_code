#include<stdio.h>

void killsame(char* a, char* b)
{
    int i = 0;
    int j;
    int k = 0;
    int label = 0;
    while (a[i] != '\0cle ')
    {
        label = 1;
        for ( j = 0; j < i; j++)
        {
            if(a[i] == b[j])
            {  
                label = 0;
            }
        }
        if (label)
        {

            b[k++] = a[i];
        }
        i++;   
    }
    b[k] = '\0';
    puts(b);

}

int main()
{
    printf("please input a string you want\n");
    char old[100];
    char new[100];
    scanf("%s", old);
    killsame(old, new);
    return 0;
}