#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	//memset - 设置内存的
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* pc)
{
	int i = 0;
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
	}
	
}

static int FindByName(const struct Contact*pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}

	//没找到
	return -1;
}

void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = {0};

	if (pc->sz == 0)
	{
		printf("通讯录为空，没法删除\n");
	}
	else
	{
		//1.找到要删除的人
		printf("请输入要删除人的名字:>");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			//2.删除
			int j = 0;
			for (j = pos; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}

			pc->sz--;
			printf("删除成功\n");
		}

	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}


void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功\n");
	}
}

