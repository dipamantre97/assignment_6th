// pointer to structure
#include<stdio.h>
struct stu
{
	char name[20];
	int rollno;
	int marks;
};
int main()
{
	struct stu s={"dipa",2,67};
	struct stu *ptr=&s;
	printf("name=%s\t",ptr->name);
	printf("rollno=%d\t",ptr->rollno);
	printf("marks=%d",ptr->marks);
	
	

	
}
