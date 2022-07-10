#define  _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
// 	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



//实现字符串拷贝
//my_strcpy

//原始版本：6分
//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;//交换\0
//}

//第一次优化（后置++，执行之后再进行加加）
//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest++ = *str++;
//	}
//	*dest = *str;//交换\0
//}

//第二次优化（当*str为\0的时候，循环条件判断为0，停止循环。）7分
//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}

//第三次优化（防止出现空指针，当出现空指针时，saaer会返回错误信息）8分
//assert()断言函数，用于在调试过程中捕捉程序错误 8分
//#include<assert.h>
//void my_strcpy(char* dest, char* str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}

//第四次优化（const修饰不需要修改的，防止dest与str写错位置） 9分
//#include<assert.h>
//void my_strcpy(char* dest,const char* str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//
//	while (*dest++ = *str++)
//	//while (*str++ = *dest++)
//	{
//		;
//	}
//}


//第五次优化（函数my_strcpy有一个返回值，返回值为拷贝目的地的初地址，
//				通过这个地址可以直接访问拷贝之后的目的地）10分
//#include<assert.h>
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	//把str指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *str++)
//		//while (*str++ = *dest++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "HELLO";
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* arr)
{
	assert(arr != NULL);//保证指针的有效性
	int count = 0;
	while (*arr !=  '\0')
	{
		count++;
		arr++;
	}
	return count;
}

int main()
{
	char arr[] = "hello";
	int count = 0;
	count = my_strlen(arr);
	printf("%d\n", count);
	return 0;
}