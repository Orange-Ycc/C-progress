#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//创建一个结构体，描述一个学生的一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字
//stu 结构体标签
//struct stu 结构体类型

//定义一个结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char table[13];
//	char sex[5];
//}s1, s2, s3;   //s1,s2,s3是创建的三个全局结构体变量    
//			   一般不从这里创建使用，所以一般为空

//typedef  可以使用它来为类型取一个新的名字

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char table[13];
//	char sex[5];
//}stu;		//把结构体名struct stu 重命名为stu
//
//int main()
//{
//	//创建结构体局部变量
//	struct stu s1 = { "张三",28,"13622222299","男" };
//	stu s2 = { "李四",30,"13666622299","女" };
//	return 0;
//}



//嵌套结构体初始化
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char name;
//	struct s b;
//	char* p;
//};
//
//int main()
//{
//	char arr[10] = "hhhh\n";
//	struct T c = { "haha",{100,"www","qwerttyy",3.1415926},arr };
//	
//	printf("%d\n", c.name);
//	printf("%d\n", c.b.a);
//	printf("%s\n", c.p);
//
//	return 0;
//}

//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char table[13];
//	char sex[5];
//};		//把结构体名struct stu 重命名为stu
//
//int main()
//{
//	//创建结构体局部变量
//	struct stu s1 = { "张三",28,"13622222299","男" };
//
//	printf("%s\n", s1.name);
//	return 0;
//}

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //传结构体
	print2(&s); //传地址
	return 0;
}
