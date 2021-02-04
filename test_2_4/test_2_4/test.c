#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}
#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	while (*dest++ = *src++)//拷贝字符串，包括'\0'
//	{
//		;
//	}
//	return ret;//返回的目标空间的起始地址
//}
//
//int main()
//{
//	//字符串拷贝的
//	char arr1[20] = "*************";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//
//	return 0;
//}

//strcat - 字符串追加

//char* my_strcat(char*dest, const char*src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	//1. 找到目标空间的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = "abc";
//	strcat(arr, arr);
//
//	return 0;
//}
//
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//
//
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	//char*p = "abcdef";
//	//int ret = strcmp("abq", "abcdef");
//	//int ret = strcmp("abc", "abcd");
//	//int ret = strcmp("abcd", "abcd");
//	//int ret = my_strcmp("abq", "abcdef");
//	//printf("%d\n", ret);
//	if (strcmp("abq", "abcdef") == 1)
//	{
//		printf(">\n");
//	}
//
//	//abq
//	//abcdef
//
//	//字符串比较-不是比较长度
//	//比较的是字符串中对应位置的字符的ASCII值
//
//	return 0;
//}

//
//字符串操作函数-长度不受限制的字符串操作函数
//strcpy
//strcat
//strcmp
//

//长度受限制的字符串操作函数
//strncpy
//strncat
//strncmp


//int main()
//{
//	char arr1[20] = "#######";
//	char arr2[] = "abc";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello \0#####";
//	strncat(arr, "abc", 5);
//
//	return 0;
//}
//

//
//int main()
//{
//	int ret = strncmp("abcdef", "abcd", 5);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//__cdecl 是一种函数调用约定
//函数传参的顺序
//函数栈帧的创建方式
//

//
//KMP 算法 了解一下
//
//
//char* my_strstr(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	const char *cp = s1;
//
//	if (*s2 == '\0')
//		return (char*)s1;
//
//	while (*cp)
//	{
//		const char *p1 = cp;
//		const char *p2 = s2;
//		while ((*p1) && (*p2) &&  (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//	
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defq";
//
//	char*ret = my_strstr(arr1, arr2);//在arr1中查找arr2字符串第一次出现的位置
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到子串\n");
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "zpw@bitedu.tech.vip.hehe";//@. 分割符
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr);
//
//	char*p = ".@";//分割符的集合的字符串
//	/*printf("%s\n", strtok(arr2, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));*/
//
//	char *ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror - 错误报告函数
//把错误码转换为对应的错误信息，返回错误信息对应字符串的起始地址

//int  main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//
//	return 0;
//}

//#include <errno.h>
//
//int main()
//{
//	//printf("hehe\n");
//	FILE* pf = fopen("test.txt", "r");//file open
//	if (pf == NULL)
//	{
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//	}
//
//	return 0;
//}

#include <ctype.h>

//int main()
//{
//	//printf("%d\n", isspace(' '));
//	//printf("%d\n", isdigit('x'));
//	return 0;
//}

int main()
{
	char arr[20] = { 0 };
	gets(arr);//Hello Bit!
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}

	return 0;
}