#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

//
//int main()
//{
//	int a = 10;
//	int * p = &a;//指针变量
//	*p = 20;
//	p = 100;//
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	//如果p是整形指针，解引用访问了4个字节
//	int* p = &a;
//	*p = 0;
//	//如果p是字符指针，解引用访问了1个字节
//	char* p = &a;//int*
//	*p = 0;
//	//指针的类型的第一个作用就是：决定了指针的访问权限，也就是能访问几个字节。
//	//int* -- 4
//	//char*  -- 1
//	//short*  -- 2
//	//double* -- 8
//
//	return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;//数组名-首元素的地址
//	char*pc = arr;
//	//printf("%p\n", arr);
//	printf("%p\n", pa);
//	printf("%p\n", pa-4);
//	printf("---------------------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc-4);
//	//
//	//指针类型决定了指针+/-1，走多大的距离
//	//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//我希望把arr这10个整形的空间，看做40个字节的空间
//	//给每个字节放一个字符进去
//	char*pc = arr;
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(pc + i) = 'x';
//	}
//
//	//int*p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//}
//

//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//野狗
//	//野指针 - 
//	//p得到的地址之后，地址指向的空间已经释放了，所以这个时候的p就是野指针
//	//
//	int*p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}


//int main()
//{
//	//p是野指针
//	int* p;//没有任何初始化-随机值
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	//越界访问会导致野指针的问题
//	for (i = 0; i < 11; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	////NULL - 空指针
//	//int *q = NULL;
//
//	//int arr[10] = { 0 };
//	//int p2 = arr;
//	////p2.....
//	////p2不再用来指向arr了
//	//p2 = NULL;
//
//	//NULL指向的空间是不能访问的
//	int* p = NULL;
//	if (p != NULL)
//		*p = 20;
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//指针-指针

//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d\n", &arr[0] - &arr[9]);
//	char ch[5] = {0};
//	//指针-指针   绝对值的是指针和指针之间的元素个数
//	printf("%d\n", &arr[9] - &ch[3]);//err
//	//指针-指针 计算的前提条件是：两个指针指向的是同一块连续的空间的
//	return 0;
//}

//1. 计数器的方法
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
//2.递归的版本
//3. 指针-指针的写法

//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("&arr[%d] = %p < === > %p\n", i, &arr[i], p+i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = {0};
//
//	arr;//二维数组的数组名也是数组首元素的地址
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int * p = &a;//p是一级指针
//	int * * pp = &p;//pp是二级指针
//
//	**pp = 20;
//	printf("%d\n", a);//
//	//int*** ppp = &pp;
//	//int**** pppp = &ppp;
//
//	return 0;
//}

//指针数组

//
//数组
//整形数组 - 存放整形的数组
//字符数组 - 存放字符的数组
//指针数组 - 存放的指针
//
//
//int main()
//{
//	//int arr[10] = {0};//整形数组
//	//char ch[5] = { 'a', 'b' };//字符数组
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr就是指针数组
//	//存放整形指针的数组
//	int* arr[3] = { &a, &b, &c };//int* 
//	char* ch[5];//存放字符指针的数组
//
//	return 0;
//}

//int main()
//{
//	//char*p = "abcdef";
//	//printf("%s\n", p);
//
//	//字符指针的数组
//	char* arr[] = {"abcdef", "hello", "bit"};
//	//arr[0]  arr[1]  arr[2]
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//
//描述一个学生
//名字
//年龄
//电话
//性别

//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;
//struct Stu s3;//全局
////s1,s2是全局的
//
//int main()
//{
//	struct Stu s;//学生
//	//局部变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	char arr[10];
//	struct Point p;
//	double d;
//	int *ptr;
//};
//
//int main()
//{
//	//struct Point p = {1, 2};
//	//printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//	struct S s = { "abcdef", {2, 3},  3.14, &a};
//	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y, s.d, *(s.ptr));
//
//	return 0;
//}
//

//
//struct S
//{
//	char arr[1000];
//	int num;
//	double d;
//};
//void print1(struct S ss)
//{
//	printf("%s %d %lf\n", ss.arr, ss.num, ss.d);
//}
////相对要好
//void print2(struct S* ps)
//{
//	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
//}
//
//int main()
//{
//	struct S s = {"hello bit", 100, 99.8};
//	print1(s);//print函数来打印结构体的数据
//	print2(&s);
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}