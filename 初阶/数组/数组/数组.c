#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//һά�����ʹ��
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

//һά����Ĵ洢
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


//��ά����Ĵ�������ʼ��
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };
//	//��һ�д�ţ�1��2��3��4
//	//�ڶ��д�ţ�5��6��0��0
//	//�����д�ţ�0��0��0��0
//	int arr1[3][4] = { {1,2,3},{4,5,6} };
//	//��һ�д�ţ�1��2��3��0
//	//�ڶ��д�ţ�4��5��6��0
//	//�����д�ţ�0��0��0��0
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };
//	//��һ�д�ţ�1��2��0��0
//	//�ڶ��д�ţ�3��4��0��0
//	//�����д�ţ�5��6��0��0
//	int arr3[][4] = { {1,2,3},{4,5,6} };
//	//��һ�д�ţ�1��2��3��0
//	//�ڶ��д�ţ�4��5��6��0
//	//�����д�ţ�0��0��0��0
//	return 0;
//}

//��ӡ��ά���������Ԫ��
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

//��ӡ��ά��������Ԫ�ص�����
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

//����ð������ʵ����������
//int dubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//i = 0��ʾΪ��0��ð������
//	//һ�����飬��Ҫ����sz-1��ð������
//	for (i = 0; i < sz - 1; i++)
//	{	
//		int flag = 1;
//		//���赱����һ��ð������ʱ�������鱾��Ԫ���Ѿ�Ϊ��������ʱ��flag=1
//		int j = 0;//jΪ����Ԫ���±ꡣ
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;//���һ��ð������������Ԫ�ز�û��Ϊ�������У�flag=0��
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//			//��һ��ð���������ʱ��flag=1����ʾ����Ԫ���Լ�����
//			//����Ҫ�ٽ�����һ��ð����������ֹѭ��
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

//������Ϊ��Ԫ�ص�ַ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//1��ʵ�ֺ���init������ʼ������Ϊȫ0
//2��ʵ��print��ӡ����ÿ��Ԫ��
//3��ʵ��reverse��������Ԫ�ص�����
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
//	//Init(arr, sz);//����Ԫ�ض���ʼΪ0
//	Print(arr, sz);//��ӡ����ÿ��Ԫ��
//	Reverse(arr, sz);//����Ԫ������ 123->321
//	Print(arr, sz);//��ӡ����ÿ��Ԫ��
//	return 0;
//}




//������A�е����ݺ�����B�е����ݽ��н���������һ����
// ����һ��
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
//	printf("          ������         \n");
//	printf("arr = ");
//	Print(arr, sza);
//
//	printf("brr = ");
//	Print(brr, szb);
//	return 0;
//}
//��������
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