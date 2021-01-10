#define _CRT_SECURE_NO_WARNINGS 1

//#pragma warning(disable:4996)

//hello world
//stdio - std 标准 i input o output
//.h - 头文件
#include <stdio.h>
#include <stdlib.h>
//4. 枚举常量
//枚举 - 一一列举
//性别：男，女，保密
//
//三原色：R、G、B
//
//创建一个枚举类型
//enum 是个枚举关键字
enum Sex
{
	//枚举常量
	MALE=5,
	FEMALE,
	SECRET
};


int main()
{
	//enum Sex sex = FEMALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}
//
//int main()
//{
//	const int num = 10;
//	num = 20;
//
//	return 0;
//}

//
//3. #define 定义的标识符常量
//
//#define MAX 100
//#define ZHANGSAN 1000
//
//int main()
//{
//	int a = MAX;
//	//MAX = 200;
//	printf("a = %d\n", a);
//	int arr[MAX] = { 0 };
//	return 0;
//}
//
//
//int main()
//{
//	//1. 字面常量
//	100;//字面常量
//	3.14;//
//	/*int a = 100;
//	if (a == 5)
//	{
//
//	}*/
//	//2. const 修饰的常变量
//	//int a = 10;//变量
//	//printf("a = %d\n", a);//10
//	//a = 20;//改变a的值
//	//printf("a = %d\n", a);//20
//
//	//const int a = 10;//变量
//	//printf("a = %d\n", a);//10
//
//	//a = 20;//改变a的值
//	//printf("a = %d\n", a);//20
//
//	//数组的创建
//	//C99标准之前-数组的大小的指定必须是常量
//	//C99之后引入一个变长数组的概念，可以使用变量了
//	//const int n = 10;//n被const修饰了，具有常属性，但是还是变量
//	//int arr[n] = {0};//
//
//	
//	return 0;
//}

//一个工程中可以有多个.c文件
//但是多个.c文件中只能有一个main函数

//int main()
//{
//	{
//		//a创建
//		int a = 10;
//		printf("%d\n", a);
//		//a销毁
//	}
//	printf("%d\n", a);
//
//	return 0;
//}


//局部变量的作用域：就是自己所在的局部范围
//全局变量的作用域：就是整个工程


//extern是声明外部符号的

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("a3 = %d\n", a);
//}
//
//int main()
//{
//	{
//		printf("a1 = %d\n", a);
//	}
//	printf("a2 = %d\n", a);
//	test();
//
//	return 0;
//}

//int  main()
//{
//	//{}-代码块
//	int b = 100;
//
//	{
//		int a = 10;
//		printf("%d\n", a);
//		printf("b = %d\n", b);
//	}
//	printf("b = %d\n", b);
//
//
//	return 0;
//}

//int main()
//{
//	//写代码求两个整数的和
//	int a = 0;
//	int b = 0;
//	scanf("%d+%d", &a, &b);
//	int c = 0;
//	printf("%d\n", c=a+b);
//
//	return 0;
//}

////全局变量-放在大括号外部的就是全局变量
//int b = 100;
//
//int main()
//{
//	int a = 10;//局部变量-放在大括号内部的就是局部变量
//	//局部变量和全局变量名字冲突的时候，局部优先
//
//	printf("%d", b);//?
//
//	return 0;
//}

//int main()
//{
//	//年龄
//	short age = 20;
//	float weight = 55.6f;//直接写出的浮点数默认类型是double
//	char ch = 'a'; 
//
//	return 0;
//}

//
//int main()
//{
//	//%d 表示打印整形数字
//	//sizeof   是C语言的一个操作符
//	//sizeof计算的是对应类型的变量所占内存的大小
//	//sizeof 计算机结果的单位是：字节
//	//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//
//	return 0;
//}



//int main(int argc, char* argv[])
//{
//	return 0;
//}
////void是明确告诉我们main函数不需要参数
//int main(void)
//{
//	return 0;
//}
//
//int main()
//{
//	return 0;
//}

//void main()
//{
//
//}
//printf-输出
//scanf-输入

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//scanf_s-VS提供
//	//gcc clang 不认识scanf_s
//	//失去了跨平台性
//
//	printf("%d\n", a);
//
//	return 0;
//}


//
//main-主函数
//代码是从main函数的第一行开始执行
//main函数是程序的入口-有且仅有一个
//
//
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//	//返回表示正确返回
//}



//比较旧的写法
//void main(void)
//{
//	printf("hehe\n");
//}




//
//Fn - 辅助功能键
//

//int main()
//{
//	//printf-打印函数
//	//库函数的使用要引入头文件
//	//
//	printf("hello world\n");
//	system("pause");//system是一个执行系统命令的函数-pause
//	return 0;
//}

//
//运行代码
//ctrl+f5
//如果按ctrl+f5没反应
//fn+ctrl+f5或者关掉fn，按ctrl+f5

//程序执行完直接就结束了，所以没有看到运行结果
//1. 设置项目属性：
//2. system("pause");
//



