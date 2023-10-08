#include<stdio.h>

typedef struct 
{
    char name[20];
    int age;
    float score;
}student;

int main()
{
    student student1;
    student student2;
    student1.age = 1;
    student2.age = 2;
    printf("the age of num1%d\n",student1.age);
    printf("the age of num2%d\n",student2.age);


}
