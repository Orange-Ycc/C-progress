#define  _CRT_SECURE_NO_WARNINGS 1


//��������
//#include<stdio.h>
//
////��������
////����Add����
////����ֵiΪ���ͣ����Զ���Add��������Ϊint
////Add���� �����������
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
//	int b = 20;��
//
//	//����Add����
//	//Ҫ�в���a��b 
//	//�з���ֵ  ����ֵ��ֵ��sum
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//
//////////////////////////////////////////////////////////////////////

//strcpy  ����
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

//memset ����ڴ��
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

//�Զ��庯��
//ret_type fun_name(para1, *)
//{
//	statement;//���������壩
//}
////ret_type  ��������
////fun_name  ������
////para1	  ��������
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//////////////////////////////////////////////////////////////////

//���庯�������ҳ����������Ľϴ�ֵ
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
//���庯�����������������ͱ���������
//#include<stdio.h>
//����1    �˷�������ʵ�ֻ��� exchange�����е�x��y �� ��������a��bû�й�ϵ
//��ʵ�δ����βε�ʱ��
// �β���ʵ�ε�һ�ݿ���
// ���βε��޸Ĳ���ı�ʵ�ε�
// void exchange1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//////////////////////////////////////////////////////////////////////
//����2  �˷�������ʵ�ֻ��� ����ָ��  int* paΪָ�����  *paΪ������
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
//��ϰ1��дһ�������ж�һ�����ǲ�������
//����1��������û�п�����������
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
//		 printf("%d������\n", a);
//	 else
//		 printf("%d��������\n", a);
//	return 0;
//}

/////////////////////////////////////////////////////////////////////
// �ж�һ�����ǲ�������
// 1���ܱ�4�������ǲ��ܱ�100 ���������
// 2���ܱ�400���������
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
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//	return 0;
//}

////////////////////////////////////////////////////////////////////////
// ʵ��һ��������������Ķ��ֲ���
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
       //���鴫�ݲ���ʱ��ʵ�����βδ��ݵ�ֻ�������һ��Ԫ�صĵ�ַ
//	i = look_up(arr,k,sz);
//	if (i == 0)
//		printf("û�ҵ�");
//	else
//		printf("%d���±�Ϊ%d\n", k, i);
//	return 0;
//}

/////////////////////////////////////////////////////////////////
// ʵ�֣�ÿ����һ������������ͽ�num��ֵ��һ
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
//Ƕ�׵���
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
// ��ʽ����
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    //����1
//    i = strlen("abc");
//    printf("%d\n", i);
//    //����2
//    printf("%d\n", strlen("abcd"));
//    return 0;
//}


//������ 4321
//#include<stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    return 0;
//}

///////////////////////////////////////////////////////////////////
//���������Ͷ���
//#include<stdio.h>
//#include"add.h"    //��������
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = 0;
//    sum = Add(a, b);    //���ú���
//    printf("%d\n", sum);
//    return 0;
//}


//////////////////////////////////////////////////////////////////
//�ݹ飺
//#include<stdio.h>
//int main()
//{
//    printf("haha\n");
//    main();
//    return 0;
//}

///////////////////////////////////////////////////////////////////
//����1234����ӡ1 2 3 4 
//1234 ��10 ȡģ Ϊ4
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
//���ַ�������
//��д����������������ʱ������
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
//�ݹ�
// //����������ʱ������ʵ�� ���ַ�������
//��abcd���ַ������ȡ�
//strlen_s("abcd")
//������룬�ж��Ƿ�Ϊ\0  
//������ǵ�ַ�����һ�����ȼ�һ
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
//�ݹ�͵���
//��n�Ľ׳ˣ�n����
//1*2*3*4*5*....*(n-1)*n
//#include<stdio.h>
//����һ��
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

//����2��
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
//    printf("%d�Ľ׳���%d\n", n, product);
//    return 0;
//}

//����3��
//��ѧ��ʽ��
//�� n<=1 ʱ���׳�Ϊ��1
//�� n>1  ʱ���׳�Ϊ��n*factorial(n-1)
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
//    printf("%d�Ľ׳���%d\n", n, product);
//
//    return 0;
//}

//////////////////////////////////////////////////////////////////////////
//쳲���������
#include<stdio.h>

//���n��쳲��������Ƕ���
//int count = 0;
//int Fibonacci(int n)
//{
//    if (n == 3)//���Ե�����쳲��������ļ��������
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
//    printf("��%d��쳲���������%d\n", n,result);
//    printf("%d\n", count);
//    return 0;
//}


//��ӡ쳲���������
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


//������쳲���������
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
//    printf("��%d��쳲���������%d\n", n, result);
//    return 0;
//}



//ʵ��һ���������ж�һ�����ǲ�������
//���ú�������ӡ100-200֮�������
//����ָ����������1���ҳ���1��������������������Ȼ��

//#include<stdio.h>
//#include<math.h>
//����1���Գ������Գ�����1��������֮�����
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
//    return 1;//��������������0������������1
//}
//�������������ŷ�
//����������ֻΪ1�������������a����������
//�����������ӣ����е����ӣ�����Ϊbc������һ��һ����һ������sqrt��a������һ��С��sqrt��a����
//���Ա���һ��С�ڻ������ƽ��������������ô��֤����ֻ��Ҫ��֤����ƽ�����Ϳ����ˡ�
//��һ������һ����С����ƽ������������
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
//    return 1;//��������������0������������1
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


//����ʵ�������������Ľ���
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


//�˷��ھ���
//����ʵ�ִ�ӡ�˷��ھ����ھ�����������������Լ�ָ��
//�磺����9 ���9*9�ھ�������12�����12*12�ĳ˷��ھ���
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



//��ӡһ������ÿһλ
//�ݹ�ʵ�ִ�ӡ������ÿһλ
//#include<stdio.h>
//��ͨ����
//void print(int a)
//{
//    while (a % 10)
//    {
//        printf("%d ", a % 10);
//        a = a / 10;
//    }
//}
//�ݹ�ʵ��
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



//�ַ��������򣨵ݹ�ʵ�֣�
// ��дһ������ reverse_string(char *string)
//ʵ�֣��������ַ����е��ַ���������
//����ʹ��c�������е��ַ�����������
//#include<stdio.h>
//#include<string.h>
//����һ����δʹ�õݹ飬����ʹ���˿⺯����
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
//����������δʹ�õݹ飬�Լ�дmy_strlen���������ַ������ȣ�
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

//�����������ݹ飬δʹ�ÿ⺯����
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



//����ʵ�֣�����ÿ������֮��
//дһ���ݹ麯��DigitSum��n��������һ�������������������������֮��
//���磺����1729�����19=1+7+2+9

//#include<stdio.h>
//δʹ�õݹ�
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



//n��k�η�
//����ʵ��n��k�η���ʹ�õݹ�
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





