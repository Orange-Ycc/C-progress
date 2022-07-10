#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//一维数组的使用
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//一维数组的存储
//int main()
//{
//	int	arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


//二维数组的创建。初始化
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };
//	//第一行存放：1，2，3，4
//	//第二行存放：5，6，0，0
//	//第三行存放：0，0，0，0
//	int arr1[3][4] = { {1,2,3},{4,5,6} };
//	//第一行存放：1，2，3，0
//	//第二行存放：4，5，6，0
//	//第三行存放：0，0，0，0
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };
//	//第一行存放：1，2，0，0
//	//第二行存放：3，4，0，0
//	//第三行存放：5，6，0，0
//	int arr3[][4] = { {1,2,3},{4,5,6} };
//	//第一行存放：1，2，3，0
//	//第二行存放：4，5，6，0
//	//第三行存放：0，0，0，0
//	return 0;
//}

//打印二维数组的所有元素
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印二维数组所有元素的坐标
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//		//printf("\n");
//	}
//	return 0;
//}

//利用冒泡排序，实现数组升序
//int dubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//i = 0表示为第0躺冒泡排序。
//	//一个数组，需要进行sz-1躺冒泡排序。
//	for (i = 0; i < sz - 1; i++)
//	{	
//		int flag = 1;
//		//假设当进行一趟冒泡排序时发现数组本身元素已经为有序排列时，flag=1
//		int j = 0;//j为数组元素下标。
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;//如果一趟冒泡排序发现数组元素并没有为有序排列，flag=0；
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//			//当一趟冒泡排序结束时，flag=1，表示数组元素以及有序
//			//不需要再进行下一趟冒泡排序，则终止循环
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,2,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	dubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名为首元素地址。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);
//	return 0;
//}


//创建一个整型数组，完成对数组的操作
//1、实现函数init（）初始化数组为全0
//2、实现print打印数组每个元素
//3、实现reverse函数数组元素的逆置
//
//
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//数组元素都初始为0
//	Print(arr, sz);//打印数组每个元素
//	Reverse(arr, sz);//数组元素逆置 123->321
//	Print(arr, sz);//打印数组每个元素
//	return 0;
//}




//将数组A中的内容和数组B中的内容进行交换。数组一样大。
// 方法一：
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void exchange(int arr[], int brr[], int sza, int szb)
//{
//	int left = 0;
//	int right = sza - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = brr[left];
//		brr[left] = tmp;
//		left++;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int brr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sza = sizeof(arr) / sizeof(arr[0]);
//	int szb = sizeof(brr) / sizeof(brr[0]);
//	printf("arr = ");
//	Print(arr, sza);
//
//	printf("brr = ");
//	Print(brr, szb);
//
//	exchange(arr, brr, sza, szb);
//	printf("          交换后         \n");
//	printf("arr = ");
//	Print(arr, sza);
//
//	printf("brr = ");
//	Print(brr, szb);
//	return 0;
//}
//方法二：
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("arr1 = ");
	Print(arr1, sz);
	printf("arr2 = ");
	Print(arr2, sz);
	return 0;
}