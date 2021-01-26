#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	//~    按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 内存-补码-
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001  -1
//	//
//	//打印出的值是原码对应的值
//	printf("%d\n", ~a);//
//	return 0;
//}

//int main()
//{
//	int a = 13;
//    //00000000000000000000000000001101
//	//00000000000000000000000000000001
//	//00000000000000000000000000000010
//	//a | (1 << 1);
//	//00000000000000000000000000001111
//	//11111111111111111111111111111101
//	//00000000000000000000000000000010
//	//a & (~(1<<1));
//	//
//	return 0;
//}

//scanf() -EOF  --> -1
//~-1 == 0

//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//
//	}
//	return 0;
//}


//++ -- 
//前置和后置

//int main()
//{
//	int a = 10;
//	int b = a--;//后置--，先使用，再--
//	printf("a=%d b=%d\n", a, b);
//
//	//int b = --a;//前置--，先--，后使用
//	//printf("a=%d b=%d\n", a, b);
//
//	//int a = 10;
//	//int b = a++;//后置++  -> 先使用，后++
//	//printf("a=%d b=%d\n", a, b);
//
//	//int b = ++a;//前置++ -> 先++，后使用
//	//printf("a=%d b=%d\n", a, b);
//	//printf("%d\n", ++a);
//	return 0;
//}

//
//int main()
//{
//	int a = (int)3.14;
//
//	//double a = 3.14;
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 4;
//	int c = a&&b;// && - 逻辑与
//	printf("%d\n", c);
//
//	return 0;
//}


//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = a||b;// || - 逻辑或
//	printf("%d\n", c);
//
//	return 0;
//}
//
//
//int main()
//{
//	int y = 2000;
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//
//	}
//	int age = 10;
//	if (age >= 18 && age <= 30)
//	{
//
//	}
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	//i = a++ && ++b && d++;
//
//	i = a++||++b||d++;
//
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	printf("%d\n", i);
//
//	return 0;
//}



//int main()
//{
//	int a = 40;
//	int b = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;
//*/
//	b = ((a > 5) ? (3) : (-3));
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = (a > b) ? (a) : (b);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 4;//[] - 下标引用操作符 - [] 的操作数  arr, 4
//	printf("%d\n", arr[4]);
//	return 0;
//}

//函数调用操作符
//
//void test()
//{
//	printf("hehe\n");
//}
//
////函数名前面的返回值类型，可以省略，但是省略掉后，默认返回的是整形
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	test();//()函数调用操作符 - 操作数 test
//	Add(2, 3);//() - 操作数 Add,2,3
//	//
//	//函数调用操作符的操作数至少有一个
//	//
//	return 0;
//}
//
//
//struct Stu
//{
//	//结构成员
//	char name[20];//名字
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	//结构成员访问操作符-建立在结构体（联合体）上的
//	struct Stu s = {"zhangsan", 20, "nan"};
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);//结构体变量.结构成员
//
//
//	//通过指针
//	struct Stu* ps = &s;
//	//拿到了ps
//	printf("%s\n", (*ps).name);//繁琐
//	printf("%s\n", ps->name);//简化
//	//->   结构体的指针->结构成员
//
//	return 0;
//}
//


//int main()
//{
//	int a = 3 + (2 - 4) * 6;//优先级决定计算顺序
//	int b = 3 + 5 + 8;//相邻2个操作符优先级相同，这是结合性说了算
//
//
//	return 0;
//}

//
//int main()
//{
//	//char --> signed char
//	char a = 3;
//	//00000000000000000000000000000011     //截断
//	//00000011-a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111-b
//	char c = a + b;
//	//a和b的大小不够一个整形大小，所以要发生整形提升
//	//整形提升是按照变量原符号位来提升的~
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010-c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//
//	printf("%d\n", c);//? -126
//	//%d - 按有符号整形打印的
//	//
//
//	return 0;
//}


//实例1
//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}



//实例2
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d\n", a);
//	return 0;
//}
//




//
//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a + b;
//	arr[1] = a - b;
//
//	//return a + b;
//	//return a - b;
//	//return a + b, a - b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//
//	return 0;
//}

//exec(vl，v2，v3，v4，v5，v6);

//void test()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);//err
//}
//int main()
//{
//
//	return 0;
//}


//int Add(int x, int y);
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}


