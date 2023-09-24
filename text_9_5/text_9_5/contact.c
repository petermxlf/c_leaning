#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(Contact* pc) 
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//������ϵ��
void AddContact(Contact* pc) {
	assert(pc);
	if (pc->data == MAX) {
		printf("ͨѶ¼����,�޷����\n");
		return;
	}
	printf("����������->\n");
	scanf_s("%s", pc->data[pc->count].name);
	printf("����������->\n");
	scanf_s("%d",&(pc->data[pc->count].age));
	printf("�������Ա�->\n");
	scanf_s("%s", pc->data[pc->count].sex);
	printf("������绰->\n");
	scanf_s("%s", pc->data[pc->count].tele);
	printf("�������ַ->\n");
	scanf_s("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("���ӳɹ�\n");
}

//��ʾͨѶ¼
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

//ɾ����ϵ��
void DelContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0) {
		printf("û����ϵ�˿���ɾ��:\n");
		return;
	}
	printf("������Ҫɾ����ϵ�˵�����:\n");
	scanf_s("%s", name);
}