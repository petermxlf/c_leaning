#include "game.h"

void menu() {
	printf("*************************\n");
	printf("********  1.play  *******\n");
	printf("********  0.exit  *******\n");
	printf("*************************\n");
}
void game() {
	char board[ROW][COL];
	char win=0;
	//��ʼ�����̵ĺ���
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisPlayBoard(board,ROW,COL);
	//����
	while(1){
		PlayerMove(board,ROW,COL);
		//�ж���Ӯ
		win = IsWin(board, ROW, COL);
		if (win != 'C') {
			break;
		}
		DisPlayBoard(board, ROW, COL);
		ComeputerMove(board, ROW, COL);
		//�ж���Ӯ
		win = IsWin(board, ROW, COL);
		if (win != 'C') {
			break;
		}
		DisPlayBoard(board, ROW, COL);
	}
	if (win == '*') {
		printf("��Ӯ��\n");
		DisPlayBoard(board, ROW, COL);
	}
	else if (win == '#') {
		printf("������\n");
		DisPlayBoard(board, ROW, COL);
	}
	else {
		printf("ƽ��|\n");
		DisPlayBoard(board, ROW, COL);
	}
	
}
int main() {
	srand((unsigned int)time(NULL));//������������������
	int input = 0;
	do {
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				break;
		}
	} while (input);
	return 0;
}