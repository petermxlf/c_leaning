#include "text.h"

//int test(const char* ch) {
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	int (*pf)(const char* ch) = test;
//	//(*pf)("abc");//(*)可以省略，它的目的是为了一眼就能认出是一个指针
//	//pf("abc");
//	//printf("%u\n", sizeof(pf));
//	return 0;
//}

//int main() {
//	int input = 0;
//	do {
//		test();//初始面板
//		printf("请选择：\n");
//		scanf_s("%d", &input);
//		switch (input) {
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

int main()
{
	//int(*pf) = Add;//函数指针
	int (*arr[4])(int, int) = { Add,Sub,mul,div };//整形函数指针数组
	//调用数组
	int i = 0;
	/*for (i = 0; i < 4; i++) {
		int ret = arr[i](4, 5);
		printf("%d\n", ret);
	}*/
	//int(*(*ppf)[4])(int ,int) = &arr;//指向函数指针的数组
	return 0;
}