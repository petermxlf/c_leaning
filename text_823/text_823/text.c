#include <stdio.h>

//写一个函数返回一个整数二进制中有几个1

//int count_num_of_1(int num) {
//int count_num_of_1(unsigned int num) {
//
//	int count = 0;
//	while (num) {
//		if ((num % 2) == 1) {
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}
//int count_num_of_1(int num) {
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) {
//		if (((num >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}
//int count_num_of_1(int num) {
//	int count = 0;
//	while (num) {
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
////判断一个数是不是2的n次方
//void name(int num) {
//	if ((num & (num - 1)) == 0) {
//		printf("是");
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int count=count_num_of_1(num);
//	printf("%d\n", count);
//	return 0;
//}

//全局变量，静态变量都是放在静态区
//全局变量在未初始化的情况下默认初始化为0
//局部变量未初始化会被赋随机值
//int i;
//int main()
//{
//	i--;
//	//sizeof的返回值是size_t类型的，是无符号整形
//	//这里i=-1；它与无符号整形比较时会进行算术转换，转换为无符号整形2^32-1
//	if (i > sizeof(i)) {
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//
//	}
//	return 0;
//}

//打印x图像
int main() {
	int x = 0;

	while (scanf_s("%d", &x) == 1) {
		int i = 0;
		int j = 0;
		for (i = 0; i < x; i++) {
			for (j = 0; j < x; j++) {
				if (i == j || i + j == x - 1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}printf("\n");
		}
	}
	return 0;
}