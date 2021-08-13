#include<stdio.h>
int main()
{
	union result
	{
		int marks;
		char grade;
		float per;
	}res;
	res.marks=90;
	printf("marks:%d\n",res.marks);
	res.grade='A';
	printf("Grade:%c\n",res.grade);
	res.per=67.8;
	printf("per:%f\n",res.per);
	
}
