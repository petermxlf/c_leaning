#include "game.h"

void MinesWeeping(char board[ROWS][COLS], int rows, int cols,char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}
void PrintBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	printf("------------------------------\n");
	for (i = 0; i <= col; i++) {
		printf("%d ", i);
	}printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}printf("\n");
	}
	printf("------------------------------\n");

}
void Lay_a_Mine(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int count = EASY_COUNT;
	while(count){
		int x = rand() % 9+1;
		int y = rand() % 9+1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}
int InIt(char board[ROWS][COLS], int x, int y) {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = -1; i < 2; i++) {
		for (j = -1; j < 2; j++) {
			count += board[x+i][y+j];
		}
	}
	return (count - 8 * '0');
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;//判断非雷的数量
	while (win<row*col-EASY_COUNT) {
		printf("please choose!>\n");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("game over!\n");
				PrintBoard(mine, ROW, COL);
				break;
			}else{
				win++;
				show[x][y] =InIt(mine,x,y);//周围雷的数量
				//show[x][y] = count + '0';//转换数字字符
				PrintBoard(show, ROW, COL);
			}
		}
		else {
			printf("Please choose!\n");
		}
	}
}