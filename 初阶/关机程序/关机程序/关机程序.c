
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
 
//ʹ��gotoʵ��
// 
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	
//again:
//	printf("��ע�⣬���ĵ��Խ���120���ػ���������룺������ְ֣�����ȡ���ػ���\n�����룺");
//	scanf("%s", &input);
//	if (strcmp(input, "������ְ�") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//����жϲ������� ������ְ� �ٸ��λ��ᣬ����again ֱ���ľ�ʱ��ػ�  ������ȷ����
//	}
//
//	return 0;
//}



//��ʹ��goto���ʵ��
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
	{
		printf("��ע�⣬���ĵ��Խ���120���ػ���������룺������ְ֣�����ȡ���ػ���\n�����룺");
		scanf("%s", &input);
		if (strcmp(input, "������ְ�") == 0)
		{
			system("shutdown -a");
			break;
		}

	}


	return 0;
}