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
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
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



//ʵ���ַ�������
//my_strcpy

//ԭʼ�汾��6��
//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = *str;//����\0
//}

//��һ���Ż�������++��ִ��֮���ٽ��мӼӣ�
//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest++ = *str++;
//	}
//	*dest = *str;//����\0
//}

//�ڶ����Ż�����*strΪ\0��ʱ��ѭ�������ж�Ϊ0��ֹͣѭ������7��
//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}

//�������Ż�����ֹ���ֿ�ָ�룬�����ֿ�ָ��ʱ��saaer�᷵�ش�����Ϣ��8��
//assert()���Ժ����������ڵ��Թ����в�׽������� 8��
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

//���Ĵ��Ż���const���β���Ҫ�޸ĵģ���ֹdest��strд��λ�ã� 9��
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


//������Ż�������my_strcpy��һ������ֵ������ֵΪ����Ŀ�ĵصĳ���ַ��
//				ͨ�������ַ����ֱ�ӷ��ʿ���֮���Ŀ�ĵأ�10��
//#include<assert.h>
//char* my_strcpy(char* dest, const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	//��strָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
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
	assert(arr != NULL);//��ָ֤�����Ч��
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