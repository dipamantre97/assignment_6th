// to find size of structure
#include<stdio.h>
#pragma pack(1)
struct stu
{
	char ch;
	int num;
	float marks;
};
int main()
{
	printf("size=%d",sizeof(struct stu));
}
