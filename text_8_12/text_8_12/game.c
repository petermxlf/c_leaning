#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//void DisPlayBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//打印分割行
//		if(i<row-1)
//			printf("---|---|---\n");
//	}
//}
void DisPlayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}printf("\n");
		}
	}
}
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col) {
	printf("玩家走\n");
	int x = 0;
	int y = 0;
	printf("请输入坐标:>\n");
	scanf_s("%d%d", &x, &y);
	while (1) {
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("您的坐标已占用>\n");
				break;
			}
		}
		else {
			printf("坐标错误，请重新输入\n");
			break;
		}
	}
}
//电脑下棋
void ComeputerMove(char board[ROW][COL], int row, int col) {
	printf("电脑下棋:>\n");
	int x = 0;
	int y = 0;
	while (1) {
		x = rand() % row;//0-2
		y = rand() % col;//0-2
		if (board[x][y] == ' ') {
			board[x][y] = 'x';
			break;
		}
	}
}
//判断输赢
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//行
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	//列
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ') {
			return board[0][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[1][1];
	}
	//平局 -- 1
	//继续 -- 0
	if (IsFull(board,row,col)) {
		return 'Q';
	}
	else {
		return 'C';
	}
}
