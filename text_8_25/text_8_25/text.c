#include<stdio.h>

//������������С������
//int Min_multiple(int a, int b) {
//	int m = a>b?a:b;
//	while (1) {
//		if ((m % a == 0) && (m % b == 0))
//			return m;
//		m++;
//	}
//}

//��Ч��
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
//	printf("������<1-1000>:>\n");
//	scanf_s("%d %d", &a, &b);
//	int c=Min_multiple(a,b);
//	printf("%d and %d min_multiple : %d\n", a, b, c);
//	return 0;
//}
//


//---------------------------------------------
//��ת�ַ�����Ҫ��
//����I like white --> white like I
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

//�жϴ�С��
//�������ڴ���ڵ͵�ַ����С���ڴ���ڸߵ�ַ������С��
//�෴���Ǵ��
int main() {
	int a = 1;
	//ָ��a�ڵ͵�ַ���ĵ�һ���ֽ�
	char* p = (char*) & a;
	if (p) {
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	return 0;
}