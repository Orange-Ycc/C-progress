
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
 
//使用goto实现
// 
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	
//again:
//	printf("请注意，您的电脑将在120秒后关机，如果输入：我是你爸爸，可以取消关机！\n请输入：");
//	scanf("%s", &input);
//	if (strcmp(input, "我是你爸爸") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//如果判断不是输入 我是你爸爸 再给次机会，跳到again 直到耗尽时间关机  或者正确输入
//	}
//
//	return 0;
//}



//不使用goto语句实现
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");

	while (1)
	{
		printf("请注意，您的电脑将在120秒后关机，如果输入：我是你爸爸，可以取消关机！\n请输入：");
		scanf("%s", &input);
		if (strcmp(input, "我是你爸爸") == 0)
		{
			system("shutdown -a");
			break;
		}

	}


	return 0;
}