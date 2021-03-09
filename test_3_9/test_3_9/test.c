#define _CRT_SECURE_NO_WARNINGS 1
//malloc
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//int main()
//{
//	int arr[10] = {0};//在栈区上申请了40个字节的空间
//
//	//动态内存开辟 - 堆区上
//  //INT_MAX
//  int* p = (int*)malloc(INT_MAX);//开辟失败的情况
//	int* p = (int*)malloc(40);//希望把40个字节当成一个10个整型的数组
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//	}
//	else
//	{
//		//开辟成功
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//不再使用p指向的动态内存
//		//手动释放动态开辟的内存
//
//		free(p);
//		p = NULL;
//
//		//......
//	}
//
//	return 0;
//}

#include <string.h>
#include <errno.h>
//
//int main()
//{
//	//int arr[10];
//	//开辟一个连续的空间
//	//malloc开辟的空间不初始化
//	//malloc参数只有1个
//	//calloc开辟的空间是初始化的
//	//calloc参数有2个
//
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//		//空间不够了，增加空间
//		int*ptr = (int*)realloc(p, 44);//调整空间大小的
//		if (ptr != NULL)
//		{
//			p = ptr;
//			return 1;
//		}
//
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//
//		//释放
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//1. 对NULL指针的解引用操作
//避免出现：对malloc/calloc/realloc函数的返回值做检测
//
//int main()
//{
//	int*p = (int*)malloc(INT_MAX);
//	//p是有可能为NULL指针的，当为NULL的时候，*p就是非法访问内存
//
//	*p = 0;
//
//	return 0;
//}
//2. 对动态开辟空间的越界访问
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//越界
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = 0;
//		}
//
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//3. 对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//..
//	free(p);
//	p = NULL;
//	return 0;
//}

//4. 使用free释放一块动态开辟内存的一部分

//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//err
//		for (i = 0; i <5; i++)
//		{
//			*p++ = 0;
//		}
//		//释放
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//5. 对同一块动态内存多次释放
//
//
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//err
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = 0;
//		}
//		//多次释放会有问题
//		free(p);
//		
//		free(p);
//
//		p = NULL;
//		
//
//	}
//
//	return 0;
//}

//6.忘记释放
//内存泄漏的问题

