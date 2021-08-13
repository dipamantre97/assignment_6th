#include<stdio.h>
struct stu
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	int i;
	struct stu s[5];
	for(i=0;i<5;i++)
	{
		printf("enter name ,rollno,marks:");
		scanf("%s%d%f",s[i].name,&s[i].rollno,&s[i].marks);
	}
	for(i=0;i<5;i++)
	{
	
	printf("name=%s\t",s[i].name);
	printf("rollno=%d\t",s[i].rollno);
	printf("marks=%f",s[i].marks);
}
	
	

	
}
