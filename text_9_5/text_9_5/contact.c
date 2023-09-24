#include "contact.h"

//初始化通讯录
void InitContact(Contact* pc) 
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//增加联系人
void AddContact(Contact* pc) {
	assert(pc);
	if (pc->data == MAX) {
		printf("通讯录已满,无法添加\n");
		return;
	}
	printf("请输入名字->\n");
	scanf_s("%s", pc->data[pc->count].name);
	printf("请输入年龄->\n");
	scanf_s("%d",&(pc->data[pc->count].age));
	printf("请输入性别->\n");
	scanf_s("%s", pc->data[pc->count].sex);
	printf("请输入电话->\n");
	scanf_s("%s", pc->data[pc->count].tele);
	printf("请输入地址->\n");
	scanf_s("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}

//显示通讯录
void ShowContact(const Contact* pc) {
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++) {
		printf("%s\t%d\t%s\t%s\t%s\n",
			pc->data[i].name, 
			pc->data[i].age, 
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//删除联系人
void DelContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0) {
		printf("没有联系人可以删除:\n");
		return;
	}
	printf("请输入要删除联系人的名字:\n");
	scanf_s("%s", name);
}