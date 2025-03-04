#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//学生
struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[20];
	char tele[12];
};

void print(struct Stu* ps)
{
	//结构体对象.成员名
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}

int main()
{
	struct Stu s = { "zhangsan",20,"nan","121421223" };
	//打印
	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);

	return 0;
}