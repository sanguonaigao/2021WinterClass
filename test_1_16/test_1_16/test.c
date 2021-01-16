#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <windows.h>


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10*4 = 40
	int k = 17;
	//在有序的数组中查找具体的某个数
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//40/4=10
	
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	//
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}





//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10*4 = 40
//	int k = 17;
//	//在有序的数组中查找具体的某个数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//40/4=10
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}
//


//
//《把时间当做朋友》 - 
// 书非借不可读也~
//
//
//int main()
//{
//	int n = 0;
//	//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	//3!*4 ==> 4!*5==>5!*6==>6!
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	//n 不要太大
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6 = 9
//	//3!*4 ==> 4!*5==>5!*6==>6!
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	//n 不要太大
//
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	//1 2 3 4
//	return 0;
//}

//
//int main()
//{
//	//for循环的3个部分都可以省略
//	//判断部分如果省略了-表示恒为真
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//打印几个？
//
//	return 0;
//}


//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0-9
//	int i = 0;
//	//[0,10)
//	//[0,9]
//	for (i = 0; i <10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(1000);
//		i = 5;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//1-10
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//


//int main()
//{
//	int i = 0;//初始化-1
//
//	while (i < 100)//判断部分-2
//	{
//		//.....
//		i += 2;//调整-3
//	}
//
//	return 0;
//}


//
//int main()
//{
//	char password[10] = {0};
//	printf("请输入密码:>");
//	//gets()//读取一行
//
//	scanf("%s", password);
//	//清理一下缓冲区
//	//getchar();//'\n'
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//读取失败的时候，getchar返回EOF
//	//EOF - end of file -1
//	//ctrl+z
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar - 从标准输入（键盘）读取一个字符
//	ch = getchar();
//	//打印一个字符到标准输出（屏幕）
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	//1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue是跳过本次循环，continue后边的代码，直接到循环的判断部分，进行下一次循环的入口判断
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//终止循环的
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	if (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:	n++;
//		case 2:m++;n++;break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}




//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	//...
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i是否为奇数
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}


//int main()
//{
//	int num = 1;
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}


//int test()
//{
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;
//	return y;
//}
//int main()
//{
//	printf("%d\n", test());
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}

