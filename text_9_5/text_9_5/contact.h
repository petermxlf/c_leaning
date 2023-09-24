#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;//重命名

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人员个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//显示通讯录
void ShowContact(const Contact*pc);

//删除联系人
void DelContact(Contact* pc);