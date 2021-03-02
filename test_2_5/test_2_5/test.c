#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <assert.h>
#include <string.h>

//
//void* my_memcpy(void*dest, const void*src, size_t count)
//{
//	void*ret = dest;
//	assert(dest && src);
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//((char*)dest)++;
//		++(char*)src;//((char*)src)++;
//	}
//	return ret;
//}
//void test1()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//}
//void test2()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memcpy(arr+2, arr, 16);//发现memcpy做不到
//}
//
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//void test3()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr + 2, arr, 16);
//}
//
//void test4()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memcpy(arr + 2, arr, 16);
//	//标准规定memcpy函数能够实现不重叠拷贝就行
//	//发下VS中memcpy函数可以实现重叠拷贝
//	//mommove
//}
//
//int main()
//{
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}

//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	//int arr2[] = { 1, 2, 5, 6, 7 };//01 00 00 00 02 00 00 00 05 00 00 00
//	//int ret = memcmp(arr1, arr2, 9);
//
//	//printf("%d\n", ret);
//	//char arr[10] = { 0 };
//	//memset(arr, '*', 10);//'*'
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	return 0;
//}
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//void move_num(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从前向后找一个偶数
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后向前找一个奇数
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_num(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//int n = sizeof(arr) / sizeof(arr[0]);
//	//int arr2[n];//C99
//
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100  a+b
//
//	//00000000000000000000000000101100
//	printf("%d %d", a + b, c);//300 44
//	return 0;
//}
//unsigned int a = 0x1234; 
//unsigned char b = *(unsigned char *)&a;
//
//
//在32位大端模式处理器上变量b等于（ ）
//
//题目内容：
//A.0x00
//B.0x12
//C.0x34
//D.0x1234

//1 
//1 1 
//1 2 1 
//1 3 3 1 
//1 4 6 4 1 
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i>1 && j > 0)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

//
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1))
//						{
//							//1*2*3*4*5
//							if (a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int(* (*F)(int, int) )(int)



//声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，
//该函数的返回值是int，参数是int*，正确的是（ ）
//
//题目内容：
//A.(int *p[10])(int*)
//B.int[10] * p(int *)
//C.int(*(*p)[10])(int *)
//D.int((int *)[10])*p


//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//char* left_move(char* str, int k)
//{
//	assert(str);
//	int len = strlen(str);//
//	k = k%len;
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		char tmp = *str;
//		//剩下的len-1个字符往前挪动
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//	return str;
//}

void reverse(char*left, char*right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

char* left_move(char* str, int k)
{
	assert(str);
	int len = strlen(str);//
	reverse(str, str+k-1);
	reverse(str+k, str+len-1);
	reverse(str, str + len - 1);

	return str;
}

//int is_left_move(char*s1, char* s2)
//{
//	int len = strlen(s2);
//	while (len--)
//	{
//		left_move(s2, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int is_left_move(char*s1, char* s2)
//{
//	int len2 = strlen(s2);
//	int len1 = strlen(s1);
//	if (len1 != len2)
//		return 0;
//
//	strncat(s2, s2, len2);
//	if (strstr(s2, s1))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//int main()
//{
//	//abcdef
//	//bcdefa
//	//cdefab
//	//defabc
//	//efabcd
//	//fabcde
//	//abcdef
//	char arr1[20] = "abcdef";//abcdefabcdef
//	char arr2[] = "cdefab";
//	if (is_left_move(arr2, arr1))
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	//int k = 2;
//	//left_move(arr, k);//cdefab
//	//printf("%s\n", arr);
//}


//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//
//1 2 3
//4 5 6
//7 8 9
//
//1 2 3
//2 3 4
//3 4 5
//
//
//int find(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//			x++;
//		else if (arr[x][y] > k)
//			y--;
//		else
//			return 1;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 17;
//	int ret = find(arr, k, 3, 3);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
//
//


//int main()
//{
//	printf("%d\n", -8 << 1);
//
//	return 0;
//}
//

typedef struct{
	const char*description; 
	float value;
}swag;

typedef struct{
	swag* swag;
	const char*sequence;
}combination;

typedef struct{
	combination numbers;
	const char*make;
}safe;

int main(int argc, char* argv[])
{
	swag gold = { "GOLD!", 1000000.0  };
	combination number = { &gold, "6502" };
	safe s = { number, "RAMACON250" };
	printf("Contents = %s\n", (s.numbers.swag)->description);
	return 0;
}

