#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在arr这个有序数组中查找一个数字k
//	int k = 0;
//	//sizeof(arr)-计算的是数组的总大小，单位是字节-40
//	//sizeof(arr[0])-计算的是数组第一个元素的大小-4
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	scanf("%d", &k);
//	//折半查找
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	//1.2.
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

#include <limits.h>

//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	int c = (a + b) / 2;
//	printf("%d\n", c);
//
//	return 0;
//}

//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	char buf[] = "bit";
//	//[b i t \0]
//	// 0 1 2 3
//	//sizeof(buf)/sizeof(buf[0])-2;
//	//strlen(buf)-1;
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒
//		system("cls");//system函数是执行系统命令的
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//abcdef
//abcq
//
//int main()
//{
//	int i = 0;
//	//用来存放密码
//	//假设正确的密码是字符串："123456"
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//两个字符串的比较不能使用==，应该使用strcmp函数
//		//strcmp - 研究返回值
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************\n");
//	printf("*****  1. play   *****\n");
//	printf("*****  0. exit   *****\n");
//	printf("**********************\n");
//}
////RAND_MAX 0x7fff
////0-32767
////%100
////0-99 +1
////1-100
//
//void game()
//{
//	//1. 生成随机数(1-100)
//	//电脑上的时间是在发生变化的
//	//time()函数返回的就是时间戳
//	int ret = rand()%100+1;//用来生成随机数的
//	//printf("%d\n", ret);
//	//2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//
//	//整个过程设置一次就行
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择(1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
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
//


//void test()
//{
//
//
//}
//
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}

//写一个关机程序
//1分钟内关机
//1分钟内输入：我是猪，取消关机
//
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	//shutdown -s -t 60  
//	char input[20] = "";
//	system("shutdown -s -t 60");//倒计时开始关机
//	while (1)
//	{
//
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//
//int main()
//{
//	//shutdown -s -t 60  
//	char input[20] = "";
//	system("shutdown -s -t 60");//倒计时开始关机
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//

//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int ret = func(1);
//	printf("%d\n", ret);
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//0 1 2 3 4 5 6 7 8 9 10
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//		//
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//处理
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//从大到小输出
//	printf("%d %d %d\n", a, b, c);//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 16;
//	int b = 24;
//	scanf("%d %d", &a, &b);
//	//最大公约
//	int i = (a > b) ? b : a;
//	for (; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}


int main()
{
	int a = 16;
	int b = 24;
	scanf("%d %d", &a, &b);
	//最大公约
	//辗转相除法

	int c = 0;
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	//最小公倍数 = a*b/最大公约数


	return 0;
}