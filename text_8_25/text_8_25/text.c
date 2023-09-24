#include<stdio.h>

//求两个数的最小公倍数
//int Min_multiple(int a, int b) {
//	int m = a>b?a:b;
//	while (1) {
//		if ((m % a == 0) && (m % b == 0))
//			return m;
//		m++;
//	}
//}

//高效率
//int Min_multiple(int a, int b) {
//	int i = 1;
//	while (1) {
//		if ((a * i) % b == 0)
//			return a * i;
//		i++;
//	}
//}
//int main() {
//	int a = 0, b = 0;
//	printf("请输入<1-1000>:>\n");
//	scanf_s("%d %d", &a, &b);
//	int c=Min_multiple(a,b);
//	printf("%d and %d min_multiple : %d\n", a, b, c);
//	return 0;
//}
//


//---------------------------------------------
//逆转字符串，要求
//输入I like white --> white like I
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char *right) {
//	assert(left);
//	assert(right);
//	while(left<right){
//		char ch = *left;
//		*left = *right;
//		*right = ch;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr,arr+len-1);
//	char* start = arr;
//	while (*start) {
//		char* end = start;
//		while (*end != ' '&&*end!='\0') {
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	printf("%s", arr);
//	return 0;
//}
//

//判断大小端
//如果大端内存放在低地址处，小端内存放在高地址处就是小端
//相反则是大端
int main() {
	int a = 1;
	//指向a在低地址处的第一个字节
	char* p = (char*) & a;
	if (p) {
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	return 0;
}