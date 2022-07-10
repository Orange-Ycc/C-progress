#define  _CRT_SECURE_NO_WARNINGS 1


//交换两个数（不创建临时变量）
//方法一：加减法
//#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("%d %d\n", a, b);
//    return 0;
//}
//方法二：异或法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//编写代码实现：求一个整数存储在内存中的二进制中1的个数（求补码中1的个数）'
//方法一：模除法（有缺陷）
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//方法二：
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//方法三：
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}


//整型提升
//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//3为int类型，二进制为：00000000 00000000 00000000 00000011
//	//把int类型存放在char类型中，int为4个字节，char为1个字节，存放需要进行截断
//	//截断之后：
//	//00000011	- a
//
//	char b = 127;
//	//127为int 类型，二进制为：00000000 00000000 00000000 01111111
//	//截断之后：
//	//01111111	- b
//
//	//整型提升：表达式中的字符和短整型操作数在使用之前转换为普通整型
//	//整型提升是按照变量的数据类型的符号位来提升的。
//
//	//00000011	- a	进行整形提升，符号位为0，所以补0
//	//00000000 00000000 00000000 00000011
//
//	//01111111	- b	进行整形提升，符号位为0，所以补0
//	//00000000 00000000 00000000 01111111
//
//	char c = a + b;
//
//	//a和b怎么相加？（加2进1）
//	//00000000 00000000 00000000 00000011	-a
//	//00000000 00000000 00000000 01111111	-b
//	//00000000 00000000 00000000 10000010	-a+b
//
//	//00000000 00000000 00000000 10000010	-a+b为整型，进行截断之后，才可以存储在c中
//	//截断之后：
//	//10000010	- c
//	//进行整型提升，最高位为1，所以补1
//	//11111111 11111111 11111111 10000010	内存存储的为补码，打印的为原码  此为补码
//	//11111111 11111111 11111111 10000001   反码
//	//10000000 00000000 00000000 01111110   原码
//
//	printf("%d\n", c);
//
//	return 0;
//}


//统计二进制中1 的个数
//写一个函数返回参数二进制中 1 的个数
//比如：15 00001111  4个1
//#include<stdio.h>
//版本一（不能求负数——————puass）
//int count_bit(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//版本二（利用unsigned，把有符号数 编程无符号数——————YES）
//int count_bit(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//版本三（按位与1）---------------YES
//int count_bit(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//版本四（a按位与a-1）---------------YES
//int count_bit(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	//写一个函数求a的二进制（补码）表示中有几个1   
//	//内存中存放的是一个数二进制的补码
//	//正数的原码 反码 补码 都一样
//	// 负数求补码
//	//反码 = 原码符号位不变，其他位按位取反
//	//补码 = 反码加1
//	int count = count_bit(a);
//
//	printf("%d\n", count);
//	return 0;
//}



//求二进制中不同位的个数
//实现：两个int整除m和n的二进制位表达中，有多少个位不同。
//出入 1999 2299    输出 7
//#include<stdio.h>
//int get_dif_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m;
//	int n;
//	scanf("%d%d", &m, &n);
//	int count = get_dif_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}



//获取二进制的奇数位和偶数位
// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
// 
//#include<stdio.h>
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//
//	return 0;
//}



//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
#include<stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0;i<sz;i++)
	{
		printf("%d ", *(p + i));
		//指针加整数产生元素地址，通过地址访问
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}