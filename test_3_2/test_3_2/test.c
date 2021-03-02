#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0x11223344;
//
//	//int* pa = &a;
//	//*pa = 0;//对pa的解引用操作访问了4个字节
//
//	
//	char*pc = &a;
//	*pc = 0;//对pc指针的解引用操作访问了1个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
//	int* pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	float f = 0.087;
//	printf("%f\n", f);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	int a = 3;
//	int b = 5;
//	int c = a + b;
//
//	const char* ps = "abcdef";
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10];//整形数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = {&a, &b, &c};//指针数组 - 整形指针的数组 - 存放的都是整形指针
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指向a，a是整形，随时pa是整形指针
//
//	//数组指针
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int* p1 = arr;
//	int (*p2)[10] = &arr;//p2就是一个数组指针
//
//	//printf("%p\n", arr);//数组名 - 首元素的地址
//	//printf("%p\n", &arr);//得到的是数组的地址
//
//	//arr + 1;//数组首元素的地址+1,跳过的是一个元素
//	//&arr + 1;//数组的地址+1,跳过的是一个数组
//
//
//	return 0;
//}

//
//指针 - 地址
//指针变量
//

#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int sum = Add(2, 3); 
//	//printf("%d\n", sum);
//	//函数的地址
//	//把函数的地址存储起来，就需要存放在一个指针变量中 - 函数指针变量
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//pf就是一个函数指针
//	int (*pf)(int, int) = Add;
//	//int sum = (*pf)(3, 4);
//	//int sum = (pf)(3, 4);
//	int sum = Add(3, 4);
//	printf("%d\n", sum);
//	//函数指针数组 - pfArr
//	int(*pfArr[4])(int, int);
//	//指向函数指针数组的指针 - ppfArr
//	int(*(*ppfArr)[4])(int, int);
//	return 0;
//}

//
//struct Book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//}b2,b3,b4;

//typedef struct Book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//}Book;
//
//int main()
//{
//	struct Book b1 = {"C语言程序设计", "谭浩强", 55};
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	Book b2 = {"C++程序设计", "张三", 45};
//
//	return 0;
//}

//
//struct S
//{
//	char c;
//	int a;
//	short s;
//}s;
//
//
//int main()
//{
//	struct S s2;
//	return 0;
//}



//匿名结构体类型
//struct
//{
//	char c;
//	int a;
//	short s;
//}s;
//
//struct
//{
//	char c;
//	int a;
//	short s;
//}* ps;
//
//
//int main()
//{
//	ps = &s;
//
//	return 0;
//}

//err
//struct Node
//{
//	int data;//4
//	struct Node n;//
//};

//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};

//err
//typedef struct
//{
//	int data;//数据域
//	Node* next;//指针域
//}Node;

//typedef struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//}Node;

struct S
{
	int a;
	int b;
	double d;
};

struct B
{
	char c;
	struct S s;
	short ss;
};

int main()
{
	struct B b = { 'a', {100, 200, 3.14},  5};
	printf("%lf\n", b.s.d);

	return 0;
}
