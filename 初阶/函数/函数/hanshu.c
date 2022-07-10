#define  _CRT_SECURE_NO_WARNINGS 1


//函数概念
//#include<stdio.h>
//
////函数定义
////定义Add函数
////返回值i为整型，所以定义Add函数类型为int
////Add功能 ，两个数相加
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;、
//
//	//调用Add函数
//	//要有参数a，b 
//	//有返回值  返回值赋值给sum
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//
//////////////////////////////////////////////////////////////////////

//strcpy  拷贝
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset 填充内存块
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "hello word";
//	memset(arr1, 'a', 5);
//	printf("%s\n", arr1);
//	return 0;
//}
///////////////////////////////////////////////////////////////////////

//自定义函数
//ret_type fun_name(para1, *)
//{
//	statement;//语句项（函数体）
//}
////ret_type  返回类型
////fun_name  函数名
////para1	  函数参数
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//////////////////////////////////////////////////////////////////

//定义函数——找出两个整数的较大值
//#include<stdio.h>
//int size(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
////int size(int x, int y)
////{
////	int z = 0;
////	if (x > y)
////		return x;
////	else
////		return y;
////}
//
//int main()
//{
//	int a = 0, b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = size(a, b);
//	printf("%d\n", c);
//	return 0;
//}

////////////////////////////////////////////////////////////////////////
//定义函数——交换两个整型变量的内容
//#include<stdio.h>
//方法1    此方法不能实现互换 exchange函数中的x与y 和 主方法的a，b没有关系
//当实参传给形参的时候
// 形参是实参的一份拷贝
// 对形参的修改不会改变实参的
// void exchange1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//////////////////////////////////////////////////////////////////////
//方法2  此方法可以实现互换 利用指针  int* pa为指针变量  *pa为解引用
//void exchange2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange1(a, b);
//	exchange2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////
//练习1：写一个函数判断一个数是不是素数
//除了1和它本身没有可以整除的数
//#include<stdio.h>
//#include<math.h>
//int prime(int n)
//{
//	int j = 2;
//	//for (j = 2; j < n; j++)
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	 i = prime(a);
//	 if (i == 1)
//		 printf("%d是素数\n", a);
//	 else
//		 printf("%d不是素数\n", a);
//	return 0;
//}

/////////////////////////////////////////////////////////////////////
// 判断一个数是不是闰年
// 1、能被4整除但是不能被100 整除的年份
// 2、能被400整除的年份
//#include<stdio.h>
//int leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0))||(n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int i = 0;
//	scanf("%d", &year);
//	i = leap_year(year);
//	if (i == 1)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}

////////////////////////////////////////////////////////////////////////
// 实现一个整型有序数组的二分查找
//#include<stdio.h>
//int look_up(int arr[],int x,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 2;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
       //数组传递参数时，实参往形参传递的只是数组第一个元素的地址
//	i = look_up(arr,k,sz);
//	if (i == 0)
//		printf("没找到");
//	else
//		printf("%d的下标为%d\n", k, i);
//	return 0;
//}

/////////////////////////////////////////////////////////////////
// 实现：每调用一次这个函数，就将num的值加一
//#include<stdio.h>
//int call(int* p)
//{
//    (*p)++;
//}
//
//int main()
//{
//    int num = 0;
//    while (num < 10)
//    {
//        call(&num);
//        printf("%d\n", num);
//    }
//    
//    return 0;
//}

///////////////////////////////////////////////////////////////////
//嵌套调用
//#include<stdio.h>
//
//void first_line()
//{
//    printf("hehe\n");
//}
//
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        first_line();
//    }
//}
//
//int main()
//{
//    three_line();
//    return 0;
//}

//////////////////////////////////////////////////////////////////
// 链式访问
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    //方法1
//    i = strlen("abc");
//    printf("%d\n", i);
//    //方法2
//    printf("%d\n", strlen("abcd"));
//    return 0;
//}


//输出结果 4321
//#include<stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    return 0;
//}

///////////////////////////////////////////////////////////////////
//函数声明和定义
//#include<stdio.h>
//#include"add.h"    //声明函数
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = 0;
//    sum = Add(a, b);    //调用函数
//    printf("%d\n", sum);
//    return 0;
//}


//////////////////////////////////////////////////////////////////
//递归：
//#include<stdio.h>
//int main()
//{
//    printf("haha\n");
//    main();
//    return 0;
//}

///////////////////////////////////////////////////////////////////
//输入1234，打印1 2 3 4 
//1234 除10 取模 为4
//#include<stdio.h>
//void print(n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    print(num);
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////
//求字符串长度
//编写函数，不允许创建临时变量。
//#include<stdio.h>
//int strlen_s(char* arr)
//{
//    int count = 0;
//    while (*arr != '\0')
//    {
//        count++;
//        arr++;
//    }
//    return count;
//}

////////////////////////////////////////////////////////////////////////////////
//递归
// //不允许创建临时变量，实现 求字符串长度
//求abcd的字符串长度。
//strlen_s("abcd")
//逐个剥离，判断是否为\0  
//如果不是地址往后加一，长度加一
//1+strlen_s("bcd")
//1+1+strlen_s("cd")
//1+1+1+stelen_s("d")
//1+1+1+1+strlen_s("")
//1+1+1+1+0
// 
//int strlen_s(char* arr)
//{
//    if (*arr != '\0')
//        return 1 + strlen_s(arr + 1);
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "abcd";
//    int count = strlen_s(arr);
//    printf("%d\n", count);
//    return 0;
//}

///////////////////////////////////////////////////////////
//递归和迭代
//求n的阶乘（n！）
//1*2*3*4*5*....*(n-1)*n
//#include<stdio.h>
//方法一：
//int main()
//{
//    int factorial = 1;
//    int n = 0;
//    int i = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        factorial = i * factorial;
//    }
//    printf("%d\n", factorial);
//    return 0;
//}

//方法2：
//int factorial(int n)
//{
//    int i = 1;
//    int product = 1;
//    for (i = 1; i <= n; i++)
//    {
//        product = i * product;
//    }
//    return product;
//}
//int main()
//{
//    int product = 0;
//    int n = 0;
//    scanf("%d", &n);
//    product = factorial(n);
//    printf("%d的阶乘是%d\n", n, product);
//    return 0;
//}

//方法3：
//数学公式：
//当 n<=1 时：阶乘为：1
//当 n>1  时：阶乘为：n*factorial(n-1)
//int factorial(int n)
//{
//    if(n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * factorial(n - 1);
//    }
//}
//int main()
//{
//    int product = 0;
//    int n = 0;
//    scanf("%d", &n);
//    product = factorial(n);
//    printf("%d的阶乘是%d\n", n, product);
//
//    return 0;
//}

//////////////////////////////////////////////////////////////////////////
//斐波那契数列
#include<stdio.h>

//求第n个斐波那契数是多少
//int count = 0;
//int Fibonacci(int n)
//{
//    if (n == 3)//测试第三个斐波那契数的计算次数。
//    {
//        count++;
//    }
//    if (n == 0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else
//    {
//        return Fibonacci(n-1)+ Fibonacci(n-2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    int result = 0;
//    scanf("%d", &n);
//    result = Fibonacci(n);
//    printf("第%d个斐波那契数是%d\n", n,result);
//    printf("%d\n", count);
//    return 0;
//}


//打印斐波那契数列
//int Fibonacci(int n)
//{
//    if (n == 0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else
//    {
//        return Fibonacci(n - 1) + Fibonacci(n - 2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    for (n = 0; n < 50; n++)
//    {
//        printf("%d ", Fibonacci(n));
//    }
//    return 0;
//}


//迭代求斐波那契数列
//int Fibonacci(int n)
//{
//    int a = 1, b = 1, c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//
//int main()
//{
//    int n = 0;
//    int result = 0;
//    scanf("%d", &n);
//    result = Fibonacci(n);
//    printf("第%d个斐波那契数是%d\n", n, result);
//    return 0;
//}



//实现一个函数，判断一个数是不是素数
//利用函数，打印100-200之间的素数
//素数指质数，大于1并且除了1和它本身不能整除其他自然数

//#include<stdio.h>
//#include<math.h>
//方法1，试除法，试除所有1和它本身之外的数
//int sushu(a)
//{
//    int i;
//    for (i = 0; i < a - 1; i++)
//    {
//        if (a % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;//不是素数，返回0，是素数返回1
//}
//方法二：开根号法
//素数是因子只为1和它本身，如果数a不是素数，
//则还有其他因子，其中的因子，列入为bc，其中一个一定有一个大于sqrt（a），有一个小于sqrt（a）。
//所以必有一个小于或等于其平方根的因数，那么验证素数只需要验证到其平方根就可以了。
//即一个合数一定有小于它平方根的质因子
//int sushu(a)
//{
//    int i;
//    for (i = 2; i <= sqrt(a); i++)
//    {
//        if (a % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;//不是素数，返回0，是素数返回1
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (sushu(i) == 1)
//        {
//            printf("%d ",i);
//        }
//        
//    }
//    return 0;
//}


//函数实现两个正整数的交换
//
//#include<stdio.h>
//void jiaohuan(int *a,int *b)
//{    
//    int tmp = 0;
//    tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("a = %d b = %d\n", a, b);
//    jiaohuan(&a, &b);
//    printf("a = %d b = %d\n", a, b);
//    return 0;
//}


//乘法口诀表
//函数实现打印乘法口诀表，口诀表的行数和列数由自己指定
//如：输入9 输出9*9口诀表，输入12，输出12*12的乘法口诀表
//#include<stdio.h>
//void print_table(int n)
//{
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-5d", i, j, i * j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print_table(n);
//    return 0;
//}



//打印一个数的每一位
//递归实现打印整数的每一位
//#include<stdio.h>
//普通方法
//void print(int a)
//{
//    while (a % 10)
//    {
//        printf("%d ", a % 10);
//        a = a / 10;
//    }
//}
//递归实现
//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    print(a);
//    return 0;
//}



//字符串的逆序（递归实现）
// 编写一个函数 reverse_string(char *string)
//实现：将参数字符串中的字符反向排列
//不能使用c函数库中的字符串操作函数
//#include<stdio.h>
//#include<string.h>
//方法一：（未使用递归，并且使用了库函数）
//void reverse_string(char arr[])
//{
//    int left = 0;
//    int right = strlen(arr) - 1;
//    while (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//方法二：（未使用递归，自己写my_strlen函数，求字符串长度）
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void reverse_string(char arr[])
//{
//    int left = 0;
//    int right = my_strlen(arr) - 1;
//    while (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}

//方法三：（递归，未使用库函数）
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void reverse_string(char arr[])
//{
//    char tmp = arr[0];
//    int len = my_strlen(arr);
//    arr[0] = arr[len - 1];
//    arr[len - 1] = '\0';
//    if (my_strlen(arr + 1) >= 2)
//    {
//        reverse_string(arr + 1);
//    }
//    arr[len - 1] = tmp;
//}
//
//int main()
//{
//    char arr[] = "abcdefg";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}



//函数实现，整数每个数字之和
//写一个递归函数DigitSum（n），输入一个正整数，返回组成它的数字之和
//例如：输入1729，输出19=1+7+2+9

//#include<stdio.h>
//未使用递归
//int DigitSum(unsigned int n)
//{
//    int sum = 0;
//    while (n % 10 != 0)
//    {
//        sum = n % 10 + sum;
//        n = n / 10;
//    }
//    return sum;
//}
//int DigitSum(unsigned int n)
//{
//    int sum = 0;
//    if (n % 10 != 0)
//    {
//        sum = DigitSum(n/10);
//     
//    }
//    sum = n % 10 + sum;
//    return sum;
//}
//int main()
//{
//    unsigned int n = 0;
//    scanf("%d", &n);
//    int sum = DigitSum(n);
//    printf("%d\n", sum);
//    return 0;
//}



//n的k次方
//函数实现n的k次方，使用递归
//
//#include<stdio.h>
//double power(int n, int k)
//{
//    //n^ k = n * n ^ (k - 1)
//    if (k < 0)
//    {
//        return (1 / (power(n, -k)));
//    }
//    else if (k == 0)
//        return 1;
//    else
//        return n * power(n, k - 1);
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    double result = power(n,k);
//    printf("%lf\n", result);
//    return 0;
//}





