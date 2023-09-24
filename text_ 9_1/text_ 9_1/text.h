#pragma once
#include<stdio.h>

//函数指针用法
//回调函数
void test() {
	printf("***********************************\n");
	printf("********1.Add      2.Sub **********\n");
	printf("********3.mul     4.div**********\n");
	printf("********0.exit           **********\n");
	printf("***********************************\n");
}
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
void calc(int (*pf)(int, int)) {
	int x = 0, y = 0;
	int ret;
	printf("请输入两个整数\n");
	scanf_s("%d%d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}