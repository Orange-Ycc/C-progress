#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����һ���ṹ�壬����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���
//stu �ṹ���ǩ
//struct stu �ṹ������

//����һ���ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char table[13];
//	char sex[5];
//}s1, s2, s3;   //s1,s2,s3�Ǵ���������ȫ�ֽṹ�����    
//			   һ�㲻�����ﴴ��ʹ�ã�����һ��Ϊ��

//typedef  ����ʹ������Ϊ����ȡһ���µ�����

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char table[13];
//	char sex[5];
//}stu;		//�ѽṹ����struct stu ������Ϊstu
//
//int main()
//{
//	//�����ṹ��ֲ�����
//	struct stu s1 = { "����",28,"13622222299","��" };
//	stu s2 = { "����",30,"13666622299","Ů" };
//	return 0;
//}



//Ƕ�׽ṹ���ʼ��
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
//	//��Ա����
//	char name[20];
//	short age;
//	char table[13];
//	char sex[5];
//};		//�ѽṹ����struct stu ������Ϊstu
//
//int main()
//{
//	//�����ṹ��ֲ�����
//	struct stu s1 = { "����",28,"13622222299","��" };
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
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //���ṹ��
	print2(&s); //����ַ
	return 0;
}
