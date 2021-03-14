#define _CRT_SECURE_NO_WARNINGS 1

//
//写一个通讯录
//可以保存1000个人的信息
//每个人的信息：
//名字
//年龄
//性别
//电话
//住址

//功能：
//1. 增加一个人的信息
//2. 删除一个指定的联系人
//3. 查找一个指定的联系人
//4. 修改一个指定的联系人
//5. 显示通讯录中所有人的信息
//6. 排序
//0. 退出
//
//静态版本 - 一次开辟1000个元素的连续空间
//动态增长的版本 - 按需开辟
//文件的版本 - 数据可以存储到文件中，不至于丢失

#include "contact.h"

void menu()
{
	printf("*************************************\n");
	printf("*****   1. add         2. del   *****\n");
	printf("*****   3. search      4. modify*****\n");
	printf("*****   5. show        6. sort  *****\n");
	printf("*****   0. exit        7. save  *****\n");
	printf("*************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};

void test()
{
	int input = 0;
	struct Contact con;//创建了一个通讯录

	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		case SORT:
			break;
		case SAVE:
			SaveContact(&con);
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

//静态通讯录 - 