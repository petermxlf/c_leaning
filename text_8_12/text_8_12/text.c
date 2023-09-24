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
	//初始化棋盘的函数
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisPlayBoard(board,ROW,COL);
	//下棋
	while(1){
		PlayerMove(board,ROW,COL);
		//判断输赢
		win = IsWin(board, ROW, COL);
		if (win != 'C') {
			break;
		}
		DisPlayBoard(board, ROW, COL);
		ComeputerMove(board, ROW, COL);
		//判断输赢
		win = IsWin(board, ROW, COL);
		if (win != 'C') {
			break;
		}
		DisPlayBoard(board, ROW, COL);
	}
	if (win == '*') {
		printf("您赢了\n");
		DisPlayBoard(board, ROW, COL);
	}
	else if (win == '#') {
		printf("你输了\n");
		DisPlayBoard(board, ROW, COL);
	}
	else {
		printf("平局|\n");
		DisPlayBoard(board, ROW, COL);
	}
	
}
int main() {
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do {
		menu();
		printf("请选择:>");
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