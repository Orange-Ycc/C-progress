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
//	char arr2[] = {'a','b','c'}; // ��� �� abc������
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



//ת���ַ�
//��c:\test\32\test.c ���ַ�������
//ʹ�õ� string.h ���е�strlen������

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


//��֧��� ѡ��

//#include<stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0����");
//	scanf("%d",&input);
//	if(input == 1)
//		printf("����һ����offer����\n");
//	else
//		printf("�ؼ���������\n");
//	return 0;
//}




//ѭ�����
//c�����д��ڵ�ѭ����䣺 while���  for ���  do...while��䡣
//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while(line<20000)
//	{
//		printf("��һ�д��룬һ������%d�С�\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("�õ�һ����offer\n");
//	return 0;
//}




////����
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
//		printf("���ֵ�ǣ�a");
//	}
//	else
//	{
//		printf("���ֵ�ǣ�b");
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
//// �ж�a��b�Ĵ�С
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
//	//���ڴ����洴��һ������Ϊa�Ŀռ䣬����ռ����Լ��ĵ�ַ������ռ������ŵ�ֵΪ10 
//	int* p = &a;
//	//&Ϊȡ��ַ���ţ�&a����˼Ϊ��ȡ��a���ڿռ�ĵ�ַ������ڱ���p�������Ŀռ�
//	*p = 20;
//	//*Ϊ�����÷��ţ�*p����˼����ͨ��p�ҵ�a����ͨ��p�Ŀռ�洢��a�ĵ�ַ���ҵ�a��
//	//*p = 20������˼Ϊ����20�����a�Ŀռ䡣����a�ռ������10�ĳ���20
//	printf("%p\n",a);
//} 
//
//#include<stdio.h>
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//pc��һ������ ����ָ�����    pc��������char*
//	//���*������Ϊ��֪ pcΪָ�����
//	printf("%d\n", sizeof(pc));
//	*pc = 'z';
//	//���*������Ϊ �����ò�����
//	printf("%c\n", ch);
//	return 0;
//}

#include<stdio.h>

//����һ���ṹ������
struct people
{
	char name[20];//�Ƴ�
	int age;//20
	double height;//186
	double weight;//170
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵ı���
	struct people Y1 = {"�Ƴ�",20,186,170};
	//�ṹ�崴���ı�����ָ������Ϊ����ṹ������
	struct people* pb = &Y1;
	//����ָ��������ýṹ��
	printf("%s\n",(*pb).name);
	printf("%d\n", (*pb).age);
	//���ü�ͷ������ʹ��ָ��������ýṹ��
	printf("------------------\n");
	printf("%s\n",pb->name);
	printf("%d\n", pb->age);


	printf("------------------\n");
	printf("������%s\n",Y1.name);
	printf("���䣺%d\n",Y1.age);
	printf("��ߣ�%f\n",Y1.height);
	printf("���أ�%f\n",Y1.weight);

	//�޸Ľṹ������������ֵ
	Y1.weight = 150;
	printf("���ʺ������Ϊ%f\n",Y1.weight);
	return 0;
}
