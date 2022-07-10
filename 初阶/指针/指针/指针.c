#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	printf("%d\n", a);//a = 20;
//	return 0;
//}


//int main()
//{
//	int  a = 0x11223344;
//	int* p = &a;
//	*p = 0;
//	return 0;
//}


//越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = i;
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//	return 0;
//}


//空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int* pa = NULL;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	printf("\n");
//	return 0;
//}
//输出：1 2 3 4 5 6 7 8 9 10


//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p - 1;
//	}
//	printf("\n");
//	return 0;
//}
//输出：10 9 8 7 6 5 4 3 2 1




//实现strlen
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char ch[] = "abc";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}


//指针关系

//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//{
//	*vp = 0;
//}


//使用指针访问数组

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p  =======  p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}


//二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	return 0;
//}


//使用二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	
//	**ppa = 30;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}


//指针数组
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
}