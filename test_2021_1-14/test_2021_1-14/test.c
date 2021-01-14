#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//
//	//arr[4] = 5;//[]就是下标引用操作符
//	//2 + 3;
//
//	int ret = Add(2, 3);//()函数调用操作符
//
//	return 0;
//}

//关键字

//int main()
//{
//	int;
//	char;
//	return 0;
//}

//
//void test(void)
//{
//
//}
//
//int main()
//{
//	//自动创建-销毁
//	int a = 10;//局部变量-自动变量
//	signed int age;
//	unsigned int age;
//
//	return 0;
//}
//
//


//typedef unsigned int uint;
////小三  - 三三
//
//int main()
//{
//	unsigned int num = 10;
//	uint num2 = 0;
//
//	return 0;
//}


//static - 静态的
//static修饰局部变量
//改变了局部变量的生命周期-作用域没有变化

//static修饰全局变量
//把外部链接属性，改成了内部链接属性

//static修饰函数



//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static修饰局部变量
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//声明
//extern 声明外部符号的

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//声明外部函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//register


//int main()
//{
//	register int a = 10;
//	//&a;//err
//	//
//	//register是建议把自己创建的变量存储到寄存器中
//	//
//	return 0;
//}
//
//#define MAX 100
//#define STR "hello bit"
//
//#define CH 'W'
//
//int main()
//{
//	//int m = MAX;
//	//printf("%d\n", m);
//	//printf("%s\n", STR);
//	printf("%c\n", CH);
//	return 0;
//}
//
//#define ADD(X,Y) (X+Y)
//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);//30
//
//	printf("%d\n", MAX(a, b));//20
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//
//	//%p 按照地址的格式打印
//	//printf("%p\n", &a);//&取地址操作符
//	int * pa = &a;//pa是专门用来存放地址的-把pa就叫指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//
//	/*char ch = 'w';
//	char* pc = &ch;*/
//
//	return 0;
//}
//


//
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	double * pd = &d;
//	*pd = 3.5;
//	printf("%lf\n", d);
//
//	return 0;
//}

//虚拟地址
//物理地址
//
//int main()
//{
//	//4 或者8 个字节
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}
//
//

//创建学生类型
//struct Stu
//{
//	//描述学生的属性
//	char name[20];//名字-字符串-字符数组
//	short age;//年龄-int
//	char sex[8];//性别-字符串
//};
//
//int main()
//{
//	//结构体的创建和初始化
//	struct Stu s1 = {"张三", 20, "男"};//对象-张三
//	struct Stu s2 = { "李四", 30, "女" };//对象-张三
//	//printf("%s %d %s\n", s1.name, s1.age, s1.sex);//结构成员访问操作符 结构体变量.结构体成员
//	
//	struct Stu* ps = &s1;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);//1
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);//2 //->结构成员访问操作符    结构体指针->结构体成员
//
//
//	//ps->name 通过ps找到所指向的对象的成员name
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	double price;
//	char id[20];
//};

//0    -数字0
//'0'  -ASCII值是48
//'\0' -值是0
//'\0'   0  本质是相同的
//NULL - 空指针 - 0

//EOF -end of file 文件结束标志

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	//[b i t]
//	printf("%d\n", strlen(arr));
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}
//



#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求结果并打印
//	int m = a / b;
//	int n = a%b;
//
//	printf("%d %d\n", m, n);
//
//	return 0;
//}
//
//
//int get_max(int x, int y)
//{
//	int ret = x > y ? x : y;
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求a和b的较大值
//	//int m = a > b ? a : b;
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//printf("hehe\n");
//	//2 + 3;//
//	//;//空语句
//	//if语句也是语句;
//
//	/*int age = 20;
//	if (age >= 18)
//		printf("成年\n");
//*/
//
//	int age = 20;
//
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//
//	return 0;
//}


//if实现多分支
//
//int main()
//{
//	int age = 0;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age >= 18 && age < 30)
//	//	printf("青年\n");
//	//else if (age >= 30 && age < 50)
//	//	printf("中年\n");
//	//else if (age >= 50 && age <= 100)
//	//	printf("老年\n");
//	//else
//	//	printf("老寿星\n");
//
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("青年\n");
//		else if (age >= 30 && age < 50)
//			printf("中年\n");
//		else if (age >= 50 && age <= 100)
//			printf("老年\n");
//		else
//			printf("老寿星\n");
//	}
//	
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

//代码风格
//重要吗