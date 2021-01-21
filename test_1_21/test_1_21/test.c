#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		//判断闰年的规则：
//		//1. 被4整除，不能被100整除是闰年
//		//2. 被400整除也是闰年
//		/*if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}*/
//		if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//素数-只能被1和它本身整除
//判断i是否为素数，拿2->i-1之间数字，试除i
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j < i; j++)//j最大就是i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标识i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		int flag = 1;//假设i是素数
//		int j = 0;
//		//j的取值范围：2->i-1
//		for (j = 2; j <= sqrt(i); j++)//j最大就是i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标识i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		int flag = 1;//假设i是素数
//		int j = 0;
//		//j的取值范围：2->i-1
//		for (j = 2; j <= sqrt(i); j++)//j最大就是i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标识i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//
// 试除法
// 筛选法
// ...
// 《素数求解的N种境界》
//



//
//勤思考：
//能不能再好一点
//

//int main()
//{
//	int  i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//9 19 29 39 99
//		//90 91 .. 99
//		//19%10==9
//		//91/10==9
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	
//	//
//	//%f - float
//	//%lf - double
//	//%s - 字符串
//	//%c - 字符
//	//%d - 有符号的整数
//	//%u - 无符号数
//	//
//	return 0;
//}
//
//


//求10 个整数中最大值

//int main()
//{
//	int arr[10] = { 0 };
//	//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//在屏幕上输出9 * 9乘法口诀表

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//
//f(x) = 2 * x + 3;
//
//
//int Add(int x, int y)
//{
//	int z = x + y;//加法
//	return z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

#include <string.h>
//
//int main()
//{
//	char arr1[] = "bit";//数据源
//	char arr2[20] = "xxxxxxxx";//目的地
//	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//


//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	//xxxxx bit
//	return 0;
//}
//
//

//形式的上的参数
//int get_max(int x, int y)
//{
//	int z = (x > y) ? (x) : (y);
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = get_max(get_max(2, 3), b);//找出2个整数的较大值
//	
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写个函数交换a和b的值
//	printf("交换前：a=%d b=%d\n", a, b);//
//	//传值调用
//	Swap1(a, b);
//	//
//	//函数传参的时候
//	//实参传递给形参，形参是实参的一份临时拷贝
//	//对形参的修改，不会影响实参
//	//
//
//	//传址调用
//	Swap2(&a, &b);
//
//	printf("交换后：a=%d b=%d\n", a, b);//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int * pa = &a;
//	int * pb = &b;
//
//	test1(pa, pb);//传值
//	test2(&pa, &pb);//传址
//
//	return 0;
//}

//is_prime(i)
//返回1-是素数
//返回0-不是素数
//
//int is_prime(int i)
//{
//	//判断i是否为素数
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//    /*
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//	*/
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int binary_serarh(int * arr, int k)
//
//
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;//
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 100;
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	//arr是数组
//	//arr作为参数，传参的时候，传递的是数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//
//	int ret = binary_search(arr, k, sz);
//
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}


void Add(int *p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);//1
	Add(&num);
	printf("%d\n", num);//2

	return 0;
}