#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//int main()
//{
//	//指针数组 - 存放指针的数组
//	int* arr[5];//
//	//数组指针 - 指向数组的指针
//	int data[10] = {0};
//	int (*pd)[10] = &data;
//	//int (*)[10]
//	//int a = 10;
//
//	return 0;
//}
//void test1(int*p)
//{}
//void test2(int(*p)[4])
//{}
//int main()
//{
//	//一维数组
//	int arr[10];
//	int* p = arr;//首元素的地址
//	int (*pa)[10] = &arr;//数组的地址
//	test1(arr);
//
//	//二维数组
//	int data[3][4];
//	int (*pd)[4] = data;//首元素的地址
//	int (*p2)[3][4] = &data;
//	test2(data);
//
//	return 0;
//}

//整形指针 - 指向整形的指针
//数组指针 - 指向数组的指针 - 存放数组的地址
//函数指针 - 指向函数的指针 - 存放函数的地址

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{
//}
//
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//
//	//char arr[5] = {0};
//	//char (*parr)[5] = &arr;
//
//	//printf("%p\n", &Add);
//	//int (*pf)(int, int) = &Add;//pf就是函数指针
//
//	//void (*p)(char*) = &test;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int(* pf)(int, int) = &Add;//&Add;
//
//	int ret = (*pf)(2, 3);//int ret = Add(2, 3);
//	//Add(2, 3);
//	//pf(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = my_strlen(arr);
//	//printf("%d\n", len);
//	//int(*pa)[4];
//	int (*pf)(const char*) = my_strlen;
//	int len = (*pf)("bit");
//	printf("%d\n", len);
//
//	len = pf("hello bit");
//	printf("%d\n", len);
//
//	return 0;
//}



//
//( *(  void(*)() )0 ) ();
//
//调用0地址处的函数，该函数无参数，返回类型是void
//

//void test()
//{
//
//}
//
//int main()
//{
//	void (*pf)() = test;
//
//	return 0;
//}

//
//这是一个函数声明
//声明的函数叫signal，signal函数有2个参数，第一个参数类型是int,第二个参数类型是一个函数指针，该函数
//指针指向的函数参数是int，返回类型是void
//signal函数的返回来类型是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//



//给函数指针类型 void(*)(int) 起一个别名 交：pfun_t

//void( * signal( int, void(*)(int) ) )(int);//1
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);//2

//函数指针 - 指针
//函数指针数组 - 数组
//存放函数指针的数组
//
//指针数组 - 存放指针的数组
//整形指针的数组 - 存放整形指针的数组


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&a; &b;
//	int* arr[] = {&a, &b};
//	//函数指针的数组
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf)(int, int);//函数指针
//
//	int(* pfA[4])(int, int);//函数指针的数组
//
//	//函数指针数组
//
//	//pfArr2就是函数指针数组
//	//int (* pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}
//


//计算器 - 加、减、乘、除
//void menu()
//{
//	printf("****************************\n");
//	printf("**** 1. add   2. sub    ****\n");
//	printf("**** 3. mul   4. div    ****\n");
//	printf("**** 0. exit            ****\n");
//	printf("****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////函数传参-函数指针
////回调函数
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//计算器
//			break;
//		case 2:
//			calc(Sub);//计算器
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//函数指针数组 - 转移表
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);//1
//		if (0 == input)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else if (input>=1 && input<=4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}


//函数指针数组
//存放函数指针的数组
//&数组名？ 可以
//指向函数指针数组的指针中

//int main()
//{
//	//指向加法运算的函数指针
//	int(*p)(int, int);//函数指针
//	//函数指针的数组
//	int(*pArr[4])(int, int);
//	//ppArr是指向函数指针数组的指针
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}


//void test1()
//{
//	printf("hehe\n");
//}
//
//void test2(void (*p)())
//{
//	p();
//}
//
//int main()
//{
//	test2(test1);
//	return 0;
//}



//
//冒泡排序
//
//对一个整形数组进行冒泡排序的
//

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的内容
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//排成升序
//	print_arr(arr, sz);
//
//	return 0;
//}
//
//库函数-qsort - quick sort
// 排序任意类型的数据
//



//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}
#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1()
//{
//	//qsort 排序整形数组
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp( ((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	//使用qsort函数排序结构体
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, {"wangwu", 15} };
//	//按照名字来排序？还是按照年龄？
//	//按年龄
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//按名字排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//
////void qsort(void *base, - 待排序数据的起始位置
////	      size_t num, 
////		  size_t width, 
////		  int(*cmp)(const void *e1, const void *e2)
////		  );
//
void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1,const void*e2))
{
	size_t i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//相邻2个元素的比较
			//base[j] base[j+1] 
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//如果不满足顺序就交换
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
//
//void test3()
//{
//	//qsort 排序整形数组
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	//使用qsort函数排序结构体
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//按照名字来排序？还是按照年龄？
//	//按年龄
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//按名字排序
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}

//int main()
//{
//	//test1();
//	//test2();
//	test4();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//
//	//void* 的指针变量，可以接收任意类型的地址
//	//因为void*的指针，没有具体类型，所以不能解引用操作，不能++/--
//
//	//int* pa = &a;
//
//	//*pa = 20;
//
//	//void* pv = &a;
//	//*pv = 0;
//	//pv++;//
//
//	return 0;
//}

