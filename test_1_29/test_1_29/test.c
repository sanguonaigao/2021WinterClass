#define _CRT_SECURE_NO_WARNINGS 1

#include <assert.h>
#include <stdio.h>

//模拟实现strlen函数

//size_t   ==  unsigned int

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str)
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
//	printf("len = %d\n", len);
//	return 0;
//}

#include <string.h>

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	printf("%d\n", Fun(2));
//	return 0;
//}


//题目名称：
//字符串逆序（递归实现）
//题目内容：
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
//

size_t my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char *left = str;
//	char* right = str+len-1;
//
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//		reverse_string(str+1);
//
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//题目名称：
//计算一个数的每位之和（递归实现）
//题目内容：
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//DigitSum(1729)
//DigitSum(172) + 9
//DigitSum(17) + 2+9 
//DigitSum(1) + 7 +2+9


//int DigitSum(size_t n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	size_t num = 0;
//	scanf("%u", &num);
//	size_t ret = DigitSum(num);
//	printf("%u\n", ret);
//	return 0;
//}
//
//
//题目名称：
//递归实现n的k次方
//题目内容：
//编写一个函数实现n的k次方，使用递归实现
//
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n*Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n,k);
//	printf("%lf\n", ret);
//}
//
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置
//

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//
//我们要的不是一两很长的火车，要的是最短时间到达一个火车站
//

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6 c=6
//	b = ++c, c++, ++a, a++;//c=8,a=8,b=7
//	b += a++ + c;//b=23 a=9
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	//算术转换
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//
//15
//1111

//统计二进制中1的个数
//int count_one_bit(size_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//n=15
//n = n&(n-1)
//上面的表达式会使得n的二进制中最右边的1消失
//
//1111-n
//1110
//1110-n
//1101-n-1
//1100-n
//1011-n-1
//1000-n

//谷歌
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//先写函数是怎么使用的
//	//TDD - 测试驱动开发
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//	return 0;
//}

//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//写一个代码，判断n是否为2^m次方？

//8
//1000
//0100
//10000
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n&(n - 1) == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//
//
//void print(int m)
//{
//	//打印奇数位
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//00000000000000000000000000001010
//



//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//

//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//
//	char *pc = (char*)&a;
//	*pc = 0;
//
//	printf("%x\n", a);
//	return 0;
//}
//
//
#include < stdio.h >
//
//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//
//题目名称：
//计算求和
//题目内容：
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//题目名称：
//喝汽水问题
//题目内容：
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//20
//	int total = 0;
//	int empty = 0;
//	total += money;
//	empty = money;
//
//	//置换
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}
//


int main()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);//20
	if (money > 0)
		total = money * 2 - 1;

	printf("total = %d\n", total);
	return 0;
}




