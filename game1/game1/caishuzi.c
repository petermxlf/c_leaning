#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//1-100�Ĳ�����С��Ϸ
void game() {
	int g1 = 0;//��������
	int get = rand()%100+1;//����һ��1-100�����
	printf("�����֣�\n");
	while (1) {
		scanf_s("%d", &g1);
		if (g1 > get) {
			printf("�´���\n");
		}
		else if (g1 < get) {
			printf("��С��\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}
void play() {
	printf("*******************\n");
	printf("******1.play*******\n");
	printf("******0.exit*******\n");
	printf("*******************\n");
	printf("�����룺\n");
}
int main() {
	srand((unsigned int)time(NULL));
	int a;
	do {
		play();//��ʼ����
		scanf_s("%d", &a);
		switch (a) {
		case 1:
			game();//��Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (a);
	return 0;
}