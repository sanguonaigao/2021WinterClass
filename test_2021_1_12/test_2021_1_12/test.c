#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{ 
//	{
//		int a = 10;
//	}
//
//	//xxx
//	return 0;
//}

#include <stdio.h>

//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num = %d\n", num);//1
//	double d = 3.14;
//	return 0;
//}
//
#include <string.h>
//
//int main()
//{
//	//"abc";
//	//"a";
//	//"";//空字符串
//	//字符串-一串字符
//	//字符数组中
//	char arr1[] = "abc";//字符串的末尾有一个\0，'\0'是字符串的结束标志
//	char arr2[] = {'a', 'b', 'c', '\0'};
//	//strlen = string length - 字符串长度
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); 
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	//%d - 整形
//	//%s - 字符串
//
//	return 0;
//}

//int main()
//{
//	printf("c:\test\test.c\n");
//	//c:\test\test.c
//	//《C和指针》-三字母词
//	//??) - ]
//	//
//	return 0;
//}

//%d
//%s
//%c- 打印字符
//int main()
//{
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//
//
//	return 0;
//}

//
//int main()
//{
//	//printf("c:\\test\\test.c\n");
//	//printf("\a\a\a\a");
//	//c:\test\test.c
//	//printf("%c\n", '\123');
//	//printf("%c\n", '\x41');
//	//41
//	//4*16^1    1*16^0
//	//64+1
//	//65
//	//printf("%d\n", strlen("abcdef"));
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//printf("%c\n", '\5');
//
//	printf("hehe\n");
//	printf("\v");
//	printf("hehe\n");
//	return 0;
//}
//

/*
int main()
{
	//C++风格的注释
	//int a = 10;
	//int b = 20;
	
	//C风格的注释-不支持嵌套注释
	//int c = 0;
	
	return 0;//返回整数0
}
*/



//int main()
//{
//	int a = 10;
//	int b = 20;
//	return 0;
//}
//

//int main()
//{
//	int input = 0;
//	printf("加入比特学习\n");
//	printf("你要好好学习吗（1/0）？\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}
//


//int main()
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

//函数-数学
//f(x) = 2*x+1
//f(x, y) = x+y

//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//2个整数的相加
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//封装一个函数完成num1和num2的求和
//	int sum = Add(num1, num2);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//int arr[10] = { 1, 2, 3};//不完全初始化
//	//printf("%d\n", arr[4]);//arr[4]是在访问下标为4的元素
//
//	//char ch[20];
//	//double d[5];
//
//	return 0;
//}

//%f-打印小数

//int main()
//{
//	// / %
//	//printf("%d\n", 7 / 2);//7除以2，商3，余1
//	//printf("%d\n", 7 % 2);//7除以2，商3，余1
//	//printf("%f\n", 7.0 / 2);
//	//除法要得到小数，/的两端必须至少有一个操作数是浮点数
//	//printf("%d\n", 7 % 2.0);//err
//	return 0;
//}

//int main()
//{
//	int a = 12;//整形-4个字节-32bit
//	//把a的二进制位向右移动1位
//	int b = a << 1;
//	//00000000000000000000000000001100
//	//
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	//int c = a&b;
//	//& - 按(2进制)位与
//	//0101
//	//0011
//	//0001
//	//按位或
//	//int c = a | b;
//	//0101
//	//0011
//	//0111
//	//
//	//按位异或-相同为0，相异为1
//	int c = a^b;
//	//0101
//	//0011
//	//0110
//	//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 1;
//	a += 1;
//	
//	a = a - 4;
//	a -= 4;
//
//	return 0;
//}

//单目操作符-只有一个操作数

//int main()
//{
//	//2 + 3; - 双目操作符
//	//0表示假，非0表示真
//	int a = !0;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = -1;//4个字节
//	//a = -a;
//	//a = +a;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = --a;
//	
//	//int b = a--;//先使用，再--
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//9
//
//
//	//int b = ++a;//前置++，先++，后使用
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	//int b = a++;//后置++， 先使用，后++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	//printf("%d\n", a++);//
//	//printf("%d\n", a);
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//不好的
//	printf("b = %d\n", b);
//
//	return 0;
//}
//

//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	//逻辑与
//	//int c = a && b;
//	//逻辑或
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//条件操作符/三目操作符
//int main()
//{
//	int a = 3;
//	int b = 0;
//	
//	if (a > 5)
//		b = 10;
//	else
//		b = 20;
//
//	b = (a > 5 ? 10 : 20);
//
//	return 0;
//}

//int main()
//{
//	int a = (2+3, 3, 4, 5, 6+1);
//
//	printf("%d\n", a);
//
//	return 0;
//}

