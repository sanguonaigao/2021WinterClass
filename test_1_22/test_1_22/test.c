#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//函数能不能嵌套定义？--- no


//函数的嵌套调用
//
//void newline()
//{
//	printf("hehe\n");
//}
//
//void threeline()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		newline();
//	}
//}
//
//int main()
//{
//	threeline();
//	return 0;
//}


//int main()
//{
//	/*
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	*/
//
//	//链式访问
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}



//先声明函数
//int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//

//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//

#include "add.h"

//导入静态库
//
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//

//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//
//
//void print(int n)//
//{
//	if (n > 9)
//	{
//		print(n / 10);//
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	//打印num的每一位
//	//1 2 3 4
//	print(num);//print函数就可以把num的每一位打印在屏幕上
//	//
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4
//	//
//	return 0;
//}
//
//
//


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//}

//计数器的方式1
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//my_strlen("abcdef")
//1+my_strlen("bcdef")
//1+1+my_strlen("cdef")
//1+1+1+my_strlen("def")
//1+1+1+1+my_strlen("ef")
//1+1+1+1+1+my_strlen("f")
//1+1+1+1+1+1+my_strlen("")
//1+1+1+1+1+1+0
//6
//
//
// 递归的方式
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	//数组名是首元素的地址 - char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//

//编译器可能提供了库函数的-参考代码
//

//照着递推公式写的
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}


int count = 0;//计数器

//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//




//int main()
//{
//	int arr[10] = {0};
//	char ch[5 + 5] = {0};
//
//	return 0;
//}

//VS2013是不行
//
//int main()
//{
//	int n = 10;
//	int arr[n];//变长数组-C99标准中引入的。VS2013对C99的支持不好。
//
//	return 0;
//}


//int main()
//{
//	//初始化
//	int arr[10] = {1};//不完全初始化
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr3[10] = {0};
//	int arr4[] = { 0 };//
//	char ch[10] = { 0 };
//	char ch2[10] = {'1', 'b', 'c'};
//	char ch3[] = "abc";
//
//	return 0;
//}
//


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	//0
//	//0-1-2
//	//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}


//一维数组在内存中的存储

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int*p = arr;//数组名-数组首元素的地址
//
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p + i));//使用指针p，来访问了数组
//	}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d] = %p <=======> %p\n", i, &arr[i], p+i);
//	//	//p+i -- 是数组arr中下标为i的元素的地址
//	//}
//
//	return 0;
//}