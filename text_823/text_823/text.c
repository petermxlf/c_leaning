#include <stdio.h>

//дһ����������һ���������������м���1

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
////�ж�һ�����ǲ���2��n�η�
//void name(int num) {
//	if ((num & (num - 1)) == 0) {
//		printf("��");
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

//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�����δ��ʼ���������Ĭ�ϳ�ʼ��Ϊ0
//�ֲ�����δ��ʼ���ᱻ�����ֵ
//int i;
//int main()
//{
//	i--;
//	//sizeof�ķ���ֵ��size_t���͵ģ����޷�������
//	//����i=-1�������޷������αȽ�ʱ���������ת����ת��Ϊ�޷�������2^32-1
//	if (i > sizeof(i)) {
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//
//	}
//	return 0;
//}

//��ӡxͼ��
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