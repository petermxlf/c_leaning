#include "game.h"


void menu() {
	printf("*************************************\n");
	printf("********    1.play      *************\n");
	printf("********    0.exit      *************\n");
	printf("*************************************\n");

}

void game() {
	//存储雷的数组
	char mine[ROWS][COLS] = { 0 };
	//扫雷的数组
	char show[ROWS][COLS] = { 0 };
	MinesWeeping(mine,ROWS,COLS,'0');//初始化存储雷数组
	MinesWeeping(show,ROWS,COLS,'*');//初始化扫雷数组
	
	Lay_a_Mine(mine,ROW,COL);//投放
	//PrintBoard(mine, ROW, COL);//打印雷数组
	
	PrintBoard(show, ROW, COL);//打印扫雷
	FindMine(mine,show,ROW,COL);//排查雷
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
				printf("quit a game!\n");//退出游戏
				break;
			default:
				printf("input error!\n");//输入错误
				break;
		}
	} while (input);
	return 0;
}