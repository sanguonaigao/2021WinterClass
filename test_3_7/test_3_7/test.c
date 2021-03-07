#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stddef.h>

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
////offsetof - 计算的是结构体成员相对于结构体起始位置的偏移量
//
//int main()
//{
//	struct S1 s1;
//	//printf("%d\n", sizeof(s1));//
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}
//
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};


//struct S4
//{
//	char c1;//1
//	struct S3 s3;//16
//	double d;//8
//};
//
//struct S
//{
//	char c;
//	int i;
//};
//
//
//struct S1
//{
//	char c1;//0
//	int i;//1-4
//	char c2;//5
//};
//
//#pragma pack(4)
//struct S3
//{
//	char c;//0
//	//1-3
//	double d;//4-11
//	int i;//12-15
//	//
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

//
//位段 - 二进制
//位段是在一定程度上节省空间
//
//struct A
//{
//	int _a : 2;//_a只需要2个比特位
//	int _b : 5;//_b只需要5个比特位
//	int _c : 10;
//	int _d : 30;
//};
//
//在16位的机器上 - int的大小是2个字节-16比特位的
//在32位的机器上 - int的大小是4个字节-32比特位的
//
//
//int main()
//{
//	struct A sa;//
//	//一次开辟一个整形 4个字节
//	//4 --> 32
//	//_a - 2 
//	//_b - 5
//	//_c - 10
//	//剩余15个比特位 - 到底用不用？
//	//4 --> 32
//	//_d - 30
//	//C语言标准并没有规定！
//	//
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//
//创建的一个枚举类型
//
//enum Sex
//{
//	//枚举类型的可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum RGB
//{
//	RED=8,//0
//	GREEN,//1
//	BLUE//2
//};
//
//int main()
//{
//	//enum Sex s = FEMALE;
//	//enum RGB rgb = GREEN;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}
//
//#define MAX 100
//
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("****  1. add       2. sub   *****\n");
//	printf("****  3. mul       4. div   *****\n");
//	printf("****  0. exit               *****\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	enum Option input = EXIT;
//	
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case SUB:
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case MUL:
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case DIV:
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case EXIT:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//
//	int a = MAX;
//
//	return 0;
//}
//
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	//44 33 22 11
//	//
//	u.i = 0x11223344;
//	u.c = 0x55;
//
//	printf("%x\n", u.i);
//
//	/*printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));*/
//
//	//printf("%d\n", sizeof(u));//
//
//	return 0;
//}
//

//int check_sys()
//{
//	int a = 1;//0x 00 00 00 01
//	//低                   高
//	//01 00 00 00 - 小端
//	//00 00 00 01 - 大端
//	if (1 == *(char*)&a)//int*
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//int check_sys()
//{
//	int a = 1;//0x 00 00 00 01
//	//低                   高
//	//01 00 00 00 - 小端
//	//00 00 00 01 - 大端
//	return *(char*)&a;//int*
//}
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//
//	return u.c;
//}
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//
//80%
//10000元
//25000元 - 秋招 - 大四开学
//25000*80% - 宿舍实习
//
//

//
//能力
//
//钱 - 面向钱编程
//

//
//union U
//{
//	char arr[6];//6
//	int i;//4
//};



union U
{
	short arr[7];//14
	int i;//4
};

int main()
{
	union U u;
	printf("%d\n", sizeof(u));//16

	return 0;
}