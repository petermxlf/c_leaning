#include "game.h"


void menu() {
	printf("*************************************\n");
	printf("********    1.play      *************\n");
	printf("********    0.exit      *************\n");
	printf("*************************************\n");

}

void game() {
	//�洢�׵�����
	char mine[ROWS][COLS] = { 0 };
	//ɨ�׵�����
	char show[ROWS][COLS] = { 0 };
	MinesWeeping(mine,ROWS,COLS,'0');//��ʼ���洢������
	MinesWeeping(show,ROWS,COLS,'*');//��ʼ��ɨ������
	
	Lay_a_Mine(mine,ROW,COL);//Ͷ��
	//PrintBoard(mine, ROW, COL);//��ӡ������
	
	PrintBoard(show, ROW, COL);//��ӡɨ��
	FindMine(mine,show,ROW,COL);//�Ų���
}
int main()
{
	srand((unsigned int )time(NULL));
	int input = 0;
	do {
		menu();
		printf("Please choose!\n");
		scanf_s("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("quit a game!\n");//�˳���Ϸ
				break;
			default:
				printf("input error!\n");//�������
				break;
		}
	} while (input);
	return 0;
}