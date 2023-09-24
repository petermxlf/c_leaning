#include "contact.h"

void meno() {
	printf("**************************************\n");
	printf("******   1.add       2.del     *******\n");
	printf("******   3.search    4.medify  *******\n");
	printf("******   5.show      6.sort    *******\n");
	printf("******   0.exit                *******\n");
	printf("**************************************\n");
}
int main()
{
	int input = 0;
	Contact con;//通讯录
	InitContact(&con);//初始化通讯录
	do {
		meno();//菜单
		printf("请选择-->\n");
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录->\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}