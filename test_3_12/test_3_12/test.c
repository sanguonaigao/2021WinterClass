#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}

//内存泄漏的问题

//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//} 
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct St
//{
//	int n;//4
//	char c;//1
//	//3
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	//在计算机包含柔型数组成员的结构体的大小的时候，不包含柔性数组成员
//	printf("%d\n", sizeof(struct St));
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//柔性数组指的是这个数组的大小是柔性可变的
//};
//
//int main()
//{
//	//struct S s;//不是创建的
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//  //释放
//  free(ps);
//  ps = NULL;
//	return 0;
//}

//
//typedef struct S
//{
//	int n;
//	int *arr;
//}S;
//
//int main()
//{
//	S* ps = (S*)malloc(sizeof(S));
//	ps->arr = (int*)malloc(10*sizeof(int));
//	//使用
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

#include<string.h>
#include <errno.h>

int main()
{
	//相对路径
	//.. 表示上一级目录
	//. 当前目录
	//FILE* pf = fopen("../data.txt", "r");
	//绝对路径
	//./hehe/test.txt
	//../../
	FILE* pf = fopen("../../data.txt", "r");
	if (pf == NULL)
	{
		printf("打开文件失败\n");
		printf("%s\n", strerror(errno));
		return 1;//失败返回
	}
	//打开文件成功
	printf("打开文件成功\n");
	//读写文件
	//...

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
