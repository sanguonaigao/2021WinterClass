#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>





//
//int main()
//{
//	int n = 9;
//	//
//	//0 00000000 00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//(-1)^0 * 1.001*2^3
//	//S=0
//	//M=1.001
//	//E=3     +127
//	//01000001000100000000000000000000
//	//
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//	return 0;
//}
//

//
//9.5
//1001.1
//1.0011*2^3
//(-1)^0 * 1.0011 * 2^3
//S=0
//M=1.0011
//E=3
//

//0.5
//0.1 - 二进制
//1.0 * 2^-1
//(-1)^0 *1.0*2^-1
//S=0
//M=1.0
//E=-1
//

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	char* p = "abcdef";//这里的“abcdef”是一个常量字符串
//	//printf("%c\n", *p);
//	printf("%s\n", p);
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//int main()
//{
//	const char*p = "abcdef";
//
//	return 0;
//}


//
//指针数组 - 数组
//存放指针的数组，就是指针数组
//

//int main()
//{
//	int* arr[10];
//	char** ch[20];
//
//	return 0;
//}
//


//数组指针 - 指针
//好孩子 -孩子

//整形指针 - 指向整形的指针
//int a = 10;
//int* p = &a;
//字符指针 - 指向字符的指针
//数组指针 - 指向数组的指针
//

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char ch = 'w';
//	char* pc = &ch; 
//
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;//数组的地址
//	//pa就是一个指向数组的指针 - 数组指针
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//
//	//&arr 数组名是整个数组，取出的是数组的地址
//	//&arr arr 对比
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int*p1 = arr;//数组首元素的地址
//	int(*p2)[10] = &arr;//数组的地址
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	//
//	//&数组名
//	//sizeof(数组名)
//	//除此上面2种情况之外-所有遇到的数组名都是数组首元素的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;
//	// *p <==> arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p)+i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	// *p <==> arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//	printf("%d ", (*p)[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p) + i));
//
//		//printf("%d ", p[0][i]);
//		//printf("%d ", *(*(p) + i));
//	}
//	return 0;
//}

//
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////
////
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		//*(p + i) - 第i行，i从0开始
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
////void print3(int*p, int sz)
////{
////}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//二维数组传参，数组名也是首元素的地址，二维数组的首元素是第一行
//	//传过去的就是第一行的地址
//	/*int a[5];
//	print3(a, 5);*/
//
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}
//
//

//void test(int *p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int arr[10] = {0};
//	test(&a);
//	test(pa);
//	test(arr);
//
//	return 0;
//}



//void test(int **p)
//{
//	
//}
//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	int ** ppa = &pa;
//	int* arr[10];
//
//	test(&pa);
//	test(ppa);
//	test(arr);
//
//	return 0;
//}




