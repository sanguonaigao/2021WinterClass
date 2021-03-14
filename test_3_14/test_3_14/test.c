#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

//
//int main()
//{
//	//fopen函数如果是以写的形式打开
//	//如果文件不错在，会创建这个文件
//	//如果文件存在，会清空文件的内容
//	//fopen函数如果是以读的形式打开
//	//文件不存在打开失败
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//失败返回
//	}
//	//写文件
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('a', stdout);
//	fputc('b', stdout);
//	fputc('c', stdout);
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件成功，读文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//c
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//d
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写一行数据
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	char arr[4] = {0};
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读一行数据
//	//fgets(arr, 100, pf);
//	//printf("%s\n", arr);
//
//	while (fgets(arr, 10, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//
//	//fgets从标准输入流中读取
//	fgets(arr, 100, stdin);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//格式化的写入
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	//printf("%s %d %f", s.name, s.age, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	struct Stu s = {0};
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//格式化的读取
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);
//
//	//scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sscanf
//sprintf
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//	char buf[200] = { 0 };
//
//	//sprintf可以把结构化的数据转换为一个字符串
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("按照字符串的形式：%s\n", buf);
//
//	struct Stu tmp = { 0 };
//
//	//sscanf可以把一个字符串转换为一个结构化的数据
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("按照格式化的形式：%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	float score;
};

//int main()
//{
//	struct Stu s = { "zhangsan", 20, 99.5 };
//	FILE* pf = fopen("data.txt", "wb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("data.txt", "rb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件-二进制
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10000;
//	FILE*pf = fopen("bin.dat", "wb");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	FILE*pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	//读取
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	//定位文件指针到文件的起始位置
//	//fseek(pf, -2,SEEK_CUR);
//	//fseek(pf, 0, SEEK_SET);
//	//printf("%d\n", ftell(pf));
//
//	rewind(pf);
//
//	ch = fgetc(pf);//要在这里读取'a'
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE*pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	//读取
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//找结束的原因
//	if (ferror(pf))
//	{
//		printf("读取是发生错误，失败，而结束\n");
//	}
//	else if (feof(pf))
//	{
//		printf("遇到文件末尾，而结束的\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main()
{
	FILE*pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;

	return 0;
}

