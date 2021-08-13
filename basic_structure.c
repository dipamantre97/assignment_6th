#include<stdio.h>

struct student{
    char name[5];     // First name
    int age;      	       //years
    int height;           //cm
    }stu={"John",25,190};

int main()
{
    printf("\n name= %s",stu.name);
    printf("\n age= %d \n height= %d",stu.age,stu.height);
    return 0;
}

