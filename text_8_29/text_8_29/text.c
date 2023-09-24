//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数在左偶数在右
//
//#include <stdio.h>
//void move_arr(int arr[], int a) {
//	int left = 0;
//	int right = a - 1;
//	while (left<right) {
//		//从左边开始依次判断是否为偶数
//		if (arr[left] % 2 == 0) {
//			while (left<right) {
//				//如果为偶数，从右边第一个开始判断是否为奇数，然后换位
//				if (arr[right] % 2 != 0) {
//					//交换位置
//					int num = arr[left];
//					arr[left] = arr[right];
//					arr[right] = num;
//					break;
//				}
//				right--;
//			}
//		}
//		left++;
//	}
//	printf("%d,%d\n", left, right);
//}
//int main() {
//	int arr[10] = { 0 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//输入数组元素
//	for (i = 0; i < a; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	//调整元素位置
//	move_arr(arr,a);
//	//输出数组
//	/*for (i = 0; i < a; i++) {
//		printf("%d\t", arr[i]);
//	}*/
//	return 0;
//}

#include <stdio.h>

//int main()
//{
	//abcdef是一个常量字符串不可更改，但*p可以被更改,为防止意外需要用const修饰
	//const char* p = "abcdef";//把abcdef中a的地址赋值给了p
	//printf("%s\n", p);
	//return 0;
	/*char* p1 = "abcdef";
	char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1==p2\n");
	else
		printf("p1!=p2\n");
	if (arr1 ==arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");*/

//}

//指针数组
//int main() {
//
//	
//
//	//int ar1[] = { 1,2,3,4,5 };
//	//int ar2[] = { 1,2,3,4,5 };
//	//int ar3[] = { 1,2,3,4,5 };
//
//	//int* arr1[3] = { ar1,ar2,ar3 };//整形指针数组
//	//char* arr2[5];//字符指针数组
//
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++) {
//	//	for (j = 0; j < 5; j++) {
//	//		// *(arr1+i) == arr1[i]
//	//		//printf("%d ", *(arr1[i] + j));
//	//		printf("%d ", arr1[i][j]);
//
//	//	}printf("\n");
//	//}
//
//	int* p1[10];//指针数组
//	int(*p2)[10];//数组指针,p2可以指向一个数组，数组10个元素为int类型
//	return 0;
//}
//数组名通常表示的是数组首元素地址
//但是有两个例外
//sizeof（数组名）表示的是整个数组的大小
//&数组名，取出的依然是整个数组的地址

void print1(int (*p)[5],int r,int c) {
	int i = 0;
	for (i = 0; i < r; i++) {
		int j = 0;
		for (j = 0; j < c; j++) {
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", p[i][j]);
		}printf("\n");
	}
}
int Add(int x, int y) {
	return x + y;
}
int main() {
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//数组指针
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);


	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	//二维数组的首元素是它的第一行
	//print1(arr, 3, 5);

	//二维数组的行可以省略，但是列不能省略

	//函数指针 -- 指向函数的指针
	int (*pf)(int, int) = &Add;
	//&函数名 -- 拿到的是函数的地址,每个函数都有自己的地址
	//printf("%p\n", &print1);
	/*printf("%p\n", &Add);
	printf("%p\n", Add);*/
	//对于函数来说，&函数名和函数名都是函数的地址

	int ret=(*pf)(2, 3);
	printf("%d\n", ret);
	return 0;
}