#include <stdio.h>
#include <string.h>
#include <math.h>
#include "add.h"
//int main() {
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//定义函数
//int get_max(int a, int b) {
//	/*if (a > b) {
//		return a;
//	}
//	else{
//		return b;
//	}*/
//	return (a > b ? a : b);
//}
//定义函数，交换两个整型变量
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不能改变实参
//void swap(int* px, int* py) {//形参
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int main() {
//	int a, b;
//	scanf_s("%d,%d", &a, &b);
//	//函数的调用
//	// 传值调用
//	//int m=get_max(a, b);
//	//printf("最大值：%d\n", m);
//	//调用交换函数
//	printf("交换前a=%d,b=%d\n", a, b);
//	//传址调用
//	swap(&a, &b);//实参
//	printf("交换后a=%d,b=%d\n", a, b);
//}
//定义函数，判断是否是素数
//素数只能被1和自身整除
//int is_prime(int y) {
//	for (int x = 2; x <= sqrt(y); x++) {
//		if (y % x == 0) {
//			//不是素数返回0
//			return 0;
//		}
//	}
//	//是素数返回1
//	return 1;
//}
//int main() {
//	int a = 0;
//	scanf_s("%d",&a);
//	if (is_prime(a))
//		printf("%d是素数", a);
//	return 0;
//}
//函数，判断是否是闰年
//可以被4整除并且不能被100整除，可以被400整除
//is_leap_year(int year1) {
//	if ((year1 % 100!=0&&year1%4==0) || year1 % 400 == 0) {
//		//是闰年返回1
//		return 1;
//	}
//	//不是闰年返回零
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	if (is_leap_year(year))
//		printf("%d年，是闰年",year);
//	return 0;
//}
//数组传参实际上传递的是数组首元素的地址
//而不是整个数组
//所以在函数内部计算一个函数参数部分的数组元素个数是不靠谱的
//函数不写返回值时，默认返回类型为int
/*int binary_search(int arr[],int k,int sz) {
	int left = 0;
	int right = sz - 1;
	for (int i = 0; i < sz; i++) {
		int mid = left + (right - left) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}*/
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	//找到了，返回下标
//	//没找到，返回-1
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为%d", ret);
//	return 0;
//}
//int main() {
//	int a = 4, b = 5;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//void print(unsigned int n) {
//    if (n > 9) {
//        print(n / 10);
//    } 
//    printf("%d ", n % 10);
//}
////递归的实现
//int main() {
//    unsigned int num = 0;
//    scanf_s("%u", &num);
//    print(num);//接受一个整形（无符号），顺序打印他的每一位
//    return 0;
//}