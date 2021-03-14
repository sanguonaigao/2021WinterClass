
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>


#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define DEFAULT_SZ 3


#define MAX 1000

//描述一个人信息的结构体
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//静态的通讯录的结构体
//struct Contact
//{
//	struct PeoInfo data[MAX];//存放1000人的信息的空间
//	int sz;//表示通讯录中当前存放的人的信息个数
//};


//动态的版本
typedef struct Contact
{
	struct PeoInfo *data;
	int sz;//表示通讯录中当前存放的人的信息个数
	int capacity;//表示通讯录当前的最大容量
}Contact;
	

//函数的声明

//初始化通讯录的函数
void InitContact(struct Contact* pc);

//增加一个人的信息
void AddContact(struct Contact* pc);

//打印通讯中的信息
void ShowContact(const struct Contact* pc);

//删除一个人的信息
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(const struct Contact* pc);

//修改指定联系人
void ModifyContact(struct Contact* pc);


//销毁通讯录
void DestroyContact(struct Contact* pc);

//保存数据到文件
void SaveContact(Contact* pc);