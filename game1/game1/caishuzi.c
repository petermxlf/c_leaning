#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//1-100的猜数字小游戏
void game() {
	int g1 = 0;//创建输入
	int get = rand()%100+1;//创建一个1-100随机数
	printf("猜数字：\n");
	while (1) {
		scanf_s("%d", &g1);
		if (g1 > get) {
			printf("猜大了\n");
		}
		else if (g1 < get) {
			printf("猜小了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}
void play() {
	printf("*******************\n");
	printf("******1.play*******\n");
	printf("******0.exit*******\n");
	printf("*******************\n");
	printf("请输入：\n");
}
int main() {
	srand((unsigned int)time(NULL));
	int a;
	do {
		play();//开始界面
		scanf_s("%d", &a);
		switch (a) {
		case 1:
			game();//游戏运行
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (a);
	return 0;
}