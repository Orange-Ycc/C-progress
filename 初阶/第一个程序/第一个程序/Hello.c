#define _CRT_SEURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//	printf("hello word\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	/*int num = 5;*/
//	const int num = 5;
//	printf("%d\n",num);
//	num = 10;
//	printf("%d\n",num);
//	return 0;
//}


//#include<stdio.h>
//
//#define MAX 10
//int main()
//{
//	
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}

//#include<stdio.h>
//
//enum Color
//{
//	YELLO,
//	RED,
//	BLUE
//};

//int main()
//{
//	enum Color color = BLUE;
//	printf("%d\n",YELLO);
//	printf("%d\n",RED);
//	printf("%d\n",BLUE);
//	return;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'}; // 输出 ： abc烫烫烫
//	char arr3[] = {'a','b','c',0};
//	// "abc" -- 'a' 'b' 'c' \0
//	printf("%s\n",arr1);
//
//	
//	// 'a' 'b' 'c'
//	printf("%s\n",arr2);
//
//
//	printf("%s\n",arr3);
//	
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	printf("abc\n");
//	return 0;
//}



//转义字符
//求c:\test\32\test.c 的字符串长度
//使用到 string.h 库中的strlen函数。

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch[] = "c:\test\32\test.c";
//	printf("%s\n",ch);
//	printf("%d\n",strlen(ch)); //13
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	printf("%c\n",'\132');
//	printf("%c\n",'\x30');
//	return 0;
//}
//
//


//分支语句 选择

//#include<stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？（1/0）：");
//	scanf("%d",&input);
//	if(input == 1)
//		printf("给你一个好offer！！\n");
//	else
//		printf("回家卖红薯！！\n");
//	return 0;
//}




//循环语句
//c语言中存在的循环语句： while语句  for 语句  do...while语句。
//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while(line<20000)
//	{
//		printf("敲一行代码，一共敲了%d行。\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("拿到一个好offer\n");
//	return 0;
//}




////函数
//
//#include<stdio.h>
//
//int add (int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum1 = num1 + num2;
//	int sum2 = 0;
//	int sum3 = 0;
//	sum2 = add(10,20);
//	sum3 = add(15,25);
//	printf("sum1 = %d\n",sum1);
//	printf("sum2 = %d\n",sum2);
//	printf("sum2 = %d\n",sum3);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",arr[3]);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5/2;
//	int b = 5%2;
//
//	printf("%d\n",a);
//
//	printf("%d\n",b);
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = a<<1;
//	printf("b=%d\n",b);
//	printf("a=%d\n",a);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	if (a > b)
//	{
//		printf("最大值是：a");
//	}
//	else
//	{
//		printf("最大值是：b");
//	}
//	return;
//}


//#include<stdio.h>
//int MAX(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a,b,max;
//	scanf("%d%d",&a,&b);
//	max = MAX(a,b);
//	printf("%d\n",max);
//	return 0;
//

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n",b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
////	int b = a++;
////	int c = ++a;
////	int d = a--;
//	int e = --a;
//	printf("a=%d\n",a);
//	printf("b=%d\n",e);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n",a);
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	
//	typedef unsigned int u_int;
//	unsigned int unm1 = 0;
//	u_int num2 = 0;
//	return 0;
//	}

//#include<stdio.h>
//
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n",a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//
//#include<stdio.h>
//
//int Max(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//// 判断a，b的大小
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//在内存里面创建一个名称为a的空间，这个空间有自己的地址，这个空间里面存放的值为10 
//	int* p = &a;
//	//&为取地址符号，&a的意思为，取出a所在空间的地址，存放在变量p所署名的空间
//	*p = 20;
//	//*为解引用符号，*p的意思就是通过p找到a，即通过p的空间存储的a的地址，找到a。
//	//*p = 20；的意思为，把20存放在a的空间。即把a空间里面的10改成了20
//	printf("%p\n",a);
//} 
//
//#include<stdio.h>
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc是一个变量 ——指针变量    pc的类型是char*
//	//这个*的作用为告知 pc为指针变量
//	printf("%d\n", sizeof(pc));
//	*pc = 'z';
//	//这个*的作用为 解引用操作符
//	printf("%c\n", ch);
//	return 0;
//}

#include<stdio.h>

//创建一个结构体类型
struct people
{
	char name[20];//闫程
	int age;//20
	double height;//186
	double weight;//170
};

int main()
{
	//利用结构体类型创建一个该类型的变量
	struct people Y1 = {"闫程",20,186,170};
	//结构体创建的变量的指针类型为这个结构体类型
	struct people* pb = &Y1;
	//利用指针变量调用结构体
	printf("%s\n",(*pb).name);
	printf("%d\n", (*pb).age);
	//利用箭头操作符使用指针变量调用结构体
	printf("------------------\n");
	printf("%s\n",pb->name);
	printf("%d\n", pb->age);


	printf("------------------\n");
	printf("姓名：%s\n",Y1.name);
	printf("年龄：%d\n",Y1.age);
	printf("身高：%f\n",Y1.height);
	printf("体重：%f\n",Y1.weight);

	//修改结构体变量里面的数值
	Y1.weight = 150;
	printf("减肥后的体重为%f\n",Y1.weight);
	return 0;
}
