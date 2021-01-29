#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//断点
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = Add(2, 3);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//


//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//
//

//
//int main()
//{
//	int n = 0;
//	//求n的阶乘
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	return 0;
//}
//




//模拟实现strcpy函数
//1. 了解strcpy函数
//2. 模拟实现

//char *strcpy(char *strDestination, const char *strSource);

//1
//void my_strcpy(char* dest, char*src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//2
//void my_strcpy(char* dest, char*src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//
//assert- 断言 - 括号中的表达式为真，什么都不发生，括号中的表达式为假，就会报错
//
#include <assert.h>
//3
//char* my_strcpy(char* dest, char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}


//4
//char* my_strcpy(char* dest, const char *src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//  //拷贝src指向的内容到dest指向的空间，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy - string copy
//	char arr1[20] = "qqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	char*p2 = arr2;
//	//my_strcpy
//	printf("%s\n", my_strcpy(arr1, p2));//abcdef
//
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	//num = 20;
//	int* p = &num;
//	*p = 20;
//
//	printf("%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	//const修饰的num是具有常熟性的变量，具有常熟性的意思就是不能直接修改
//	const int num = 10;
//	int n = 100;
//	const  int* const p = &num;
//
//
//	//*p = 20;
//	//p = &n;
//	printf("%d\n", num);
//	//const修饰指针，放在*的右边，修饰的是指针变量本身，使得指针变量本身不能修改
//	//但是指针指向的内容可以通过指针来改变是可以修改的
//
//	//num = 20;
//	//const int* p = &num;
//	//*p = 20;//err
//	//p = &n;//ok
//	//const修饰指针，放在*的左边，修饰的是指针指向的内容，使得指针指向的内容，不能通过指针来改变
//	//但是指针变量本身是可以修改的
//
//
//	//printf("%d\n", num);
//	return 0;
//}

//1. const 修饰普通变量
//2. const 修饰指针

//
//健壮性
//鲁棒性
//


#include <string.h>

int main()
{
	int len = _mbstrlen("abc");
	printf("%d\n", len);
	return 0;
}