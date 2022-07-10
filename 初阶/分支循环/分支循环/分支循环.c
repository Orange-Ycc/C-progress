#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<stdio.h>
//
//int main()
//{
//	int age = 10;
//
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age <= 50)
//		printf("壮年");
//
//
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d\n", &a);
//
//	if (a % 2 != 0)
//		printf("%d为奇数\n", a);
//	else
//		printf("%d不为奇数\n", a);
//
//	return 0;
//}

//输出一百以内的奇数
//int main()
//{
//	//int a = 1;
//	//while (a<=100)
//	//{
//	//	
//	//	if (a % 2 != 0)
//	//	{
//	//		printf("%d\n", a);
//	//	}
//	//	a++;
//	//
//	//}
//
//
//	int i = 1;
//	while(i <= 100)
//	{
//		printf("%d\n",i);
//		i += 2;
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;

	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default:
	//	printf("输入错误\n");
	//	break;
//	}
//	return 0;
//
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//			case 1:n++;
//			case 2:m++; n++;
//				break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d\n",m,n);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	//输入密码  存放在password数组当中
//	scanf("%s", password);
//	//缓冲区剩余一个/n   读取一下
//	//getchar();
//	//多次提取缓冲区剩余
//	while ((ch = getchar()) != '\n');
//	printf("请确认（Y/N）：");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	printf("请输入一个字符：");
//
//	while ((ch = getchar()) != EOF)
//	{
//		if ('0' > ch || '9' < ch)
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
// 利用for循环打印1~10
//
//int main()
//{
//	for (int a = 1; a < 11; a++)
//	{
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//	}
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////
//省略 初始化，判断，调整
//
//int main()
//{
//	for (;;)
//	{
//		printf("haha");
//	}
//	return 0;
//}

//未省略初始化

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//省略初始化
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//两个循环变量
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//判断循环次数
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0,k = 0; k = 0;i++,k++)
//		k++;
//	return 0;
//}

//do...while循环打印1~10
//
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//n的阶乘
//1*2*3*4.......*n-1*n
//int main()
//{
//	int x = 1;//x为n阶乘的积
//	int n = 0;
//	int i = 0;
//	printf("请输入一个需要求阶乘的数：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x = x * i;
//	}
//	printf("n的阶乘为：%d\n", x);
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////
//计算1!+2!+3!+......+10!
//!为阶乘符号
//题目表示：1的阶乘加2的阶乘一直加到10的阶乘

//方法一：些许浪费
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int n = 0;
//	int y = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		for (i = 1, x = 1; i <= n; i++)
//		{
//			x = x * i;
//		}
//		y = x + y;
//		
//	}
//	printf("1到10的阶乘的和为：%d\n", y);
//	return 0;
//}

//方法2：简化过程
//int main()
//{
//	int x = 1;
//	int n = 0;
//	int y = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		x = x * n;
//		
//		y = x + y;
//		
//	}
//	printf("1到10的阶乘的和为：%d\n", y);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//在一个有序数组中查找具体的某个数字n
//例如在1~10里面找到7

//方法一：
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int i = 0;
////sz为元素个数。
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//		
//	}
//	printf("没找到");
//	return 0;
//}

//方法二：
//二分法查找（折半查找法）
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//左下标
//	int left = 0;
//	//右下标
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//中间下标 mid
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//		if (left>right)
//		{
//			printf("没找到");
//		}
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//从两边逐渐打印
//Hello,Word!!!
//#############
//H###########!
//He#########!!

////使用strlen函数是从string.h函数库中
//#include<string.h>
////使用sleep函数是从Windows.h库调用
//#include<Windows.h>
////使用system韩式是从stdlib.h库中调用
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "Hello,word!!!";
//	char arr2[] = "#############";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr2[0]) - 2;
//	//strlen 函数返回字符串长度，到/0前面结束
//	//int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//作用：延时1000毫秒
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//
//}




//////////////////////////////////////////////////////////////////////////////////////////
//实现登陆场景：只允许输入三次密码，密码正确提示登陆成功，三次都输入错误，退出程序
//strcmp函数在string.h库中
//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char answer[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", answer);
//		//strcmp函数 比较两个字符串  返回值为0时两个字符串相等
//		if (strcmp(answer, "123456") == 0)
//		{
//			printf("登陆成功！！！\n");
//			break;
//		}
//		else
//			printf("密码错误！\n");
//	}
//	if (i == 3)
//		printf("三次密码错误，退出程序！\n");
//	return 0;
//}




//////////////////////////////////////////////////////////////////////////////////////////
//将三个数从大到小输出
//算法实现：a中最大，b中次之，c最小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个正数：");
//	scanf("%d %d %d", &a, &b, &c);
//	int temp = 0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//
//}


//////////////////////////////////////////////////////////////////////////////////////////
//打印3的倍数
//代码实现：打印1~100之间所有3的倍数的数字
//#include<windows.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			Sleep(1000);
//		}
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////

//最大公约数
//如果数a能被数b整除，a就叫做b的倍数，b就叫做a的约数
//16 的最大约数为 16    16和8的最大约数为8  8和9的最大约数为1

//给定两个数求这两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &m, &n);
//
//	while (r=m%n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("两个数最大的公约数为：%d\n", r);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//打印闰年
// 1、能被4整除但是不能被100 整除的年份
// 2、能被400整除的年份
//打印1000 到 2000年之间的闰年

//int main()
//{
//	int  i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//if (i % 4 == 0 && i % 100 != 0)
//		//{
//		//	printf("%d ", i);
//		//	count++;
//		//}
//		//else if (i % 400 == 0)
//		//{
//		//	printf("%d ", i);
//		//	count++;
//		//}
//
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("1000~2000年间一共有%d个闰年\n", count);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//打印素数
//素数：除了1和它本身没有别的约数
//白话：只能被1和它本身整除的数是素数
// 试除法
//如果判断i是不是素数，那么就是i不能被2~i-1之间的数整除

//打印100到200之间的素数

//sqrt() 开平方  在 math.h中
//#include<math.h>
//int main()
//{
//	int i = 100;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//	//偶数不可能是素数，可以把所有的偶数直接跳过
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		//如果i = a * b 
//		//那么 a和b 至少有一个是<= 开平方i的
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n 100~200之间有%d个素数\n", count);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//100以内有多少个9
//个位为9 除10 模9
//十位为9 除10 商9
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n 一共%d个9\n", count);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//分数求和
//计算 1/1 - 1/2 + 1/3 -1/4 + 1/5 ......+ 1/99 - 1/100 的值

//方法一：
//分别算出正数和负数的和，之后用正数减去负数，得出结果
//int main()
//{
//	int i = 0;
//	float zheng = 0.0;
//	float fu = 0.0;
//	float sum = 0.0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			zheng += 1.0/i;
//		}
//		else if (i % 2 == 0)
//		{
// 			fu += 1.0/i;
//		}
//	}
//	sum = zheng - fu;
//	printf("结果为：%f\n", sum);
//	return 0;
//}

//方法二
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("结果为：%f\n", sum);
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////
//求十个整数的最大值
//创建一个数组，给定十个数，根据下标依次循环判断最大值
//每一次判断最大值赋值给max
//
//int main()
//{
//	int arr[10] = {0};
//	int max = 0;
//	int i = 0;
//	printf("请输入十个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//输出99乘法表
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int product = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			product = i * j;
//			//%2d表示 打印的时候打印两位，如果没有两位用空格补齐
//			//右对齐
//			//%-2d   左对齐
//			printf("%d*%d=%2d  ", i,j,product);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////
//二分查找
//写一个代码在一个整型有序数组中查找具体的某个数
//找到了就打印数字所在的 下标，找不到打印 找不到
//#include<string.h>
//int main()
//{
//	int arr[20] = {11,12,13,14,15,16,17,18,19,20};
//	int k = 13;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	/*
//	printf("请输入你要寻找的数字：");
//	scanf("%d", k);*/
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left>right)
//		{
//			printf("没找到\n");
//		}
//	}
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////
//猜数字游戏
//1、电脑生成一个随机的数字
//2、猜这个数字
//3、实现，玩一把，之后还想玩另外一把，直到不想玩了，退出
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("	猜数字游戏（1~100）版本！\n");
//	printf("***********************************\n");
//	printf("***   1、玩游戏   0、退出游戏   ***\n");
//	printf("***********************************\n");
//}
//void game()
//{
//	//1、生成随机数
//	// rand函数
//	//在stdlib.h函数库中有一个rand函数，专门用于返回随机数的函数
//	//rand返回的整数范围是 0~RAND_MAX   RAND_MAX= 32767
//	int ret = 0;
//	int guess = 0;
//	//时间戳（秒）：
//	//当前计算机的时间 - 计算机的起始时间（1970-01-01 0:0:0） = xxxx秒(时间戳)
//	ret = rand() % 100 + 1;//生成随机数
//	//rand返回的随机数范围在0—32767，用返回的值对100取模，范围为0-99，再加1，就是1-100
//
//	//printf("%d\n", ret);
//
//	//2、猜数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("恭喜，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//
//	//null 空指针
//	srand((unsigned int)time(NULL));//给rand随机数生成器一个起点
//
//	do
//	{
//	
//		menu();//用于输出菜单（游戏开始前提示界面）
//
//		printf("请选择：");//提醒用户，选择游戏还是退出
//		scanf("%d",&input);
//
//		switch (input)//判断用户输入的是否为1，2
//		{
//		case 1:
//			game();//猜数字游戏的过程。
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	//判断语句为input，当input为1时，为真继续循环
//	//input 为0，判断为假，游戏结束
//	//input为其他数值，判断为真，到default 选择错误
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	char ch;
//	int i = 0;
//	int j = 0;
//	scanf("%c",&ch);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c",ch);
//		}
//		printf("%\n");
//	}
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	float i;
//	scanf("%f", &i);
//	printf("%.0f",i);
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//goto    语句
//
//死循环
//下面代码执行顺序：again 进去打印一次 goto again 跳到gagin 继续执行打印
//int main()
//{
//again:
//	printf("hello\n");
//	goto again;
//	return 0;
//}
//
////跳过某段代码
//int main()
//{
//	printf("hello\n");
//	goto again;
//	printf("1234\n");//这一段代码被跳过，不执行
//again:
//	printf("wahhhhhh\n");
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////
//关机程序

//shutdown -s 关机
//shutdown -s -t 60  60秒之后关机
//shutdown -a  取消关机

//使用goto语句实现
//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
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
//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	
//	while(1)
//	{
//		printf("请注意，您的电脑将在120秒后关机，如果输入：我是你爸爸，可以取消关机！\n请输入：");
//		scanf("%s", &input);
//		if (strcmp(input, "我是你爸爸") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}