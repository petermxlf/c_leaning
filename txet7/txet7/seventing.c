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
//���庯��
//int get_max(int a, int b) {
//	/*if (a > b) {
//		return a;
//	}
//	else{
//		return b;
//	}*/
//	return (a > b ? a : b);
//}
//���庯���������������ͱ���
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ��ܸı�ʵ��
//void swap(int* px, int* py) {//�β�
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//int main() {
//	int a, b;
//	scanf_s("%d,%d", &a, &b);
//	//�����ĵ���
//	// ��ֵ����
//	//int m=get_max(a, b);
//	//printf("���ֵ��%d\n", m);
//	//���ý�������
//	printf("����ǰa=%d,b=%d\n", a, b);
//	//��ַ����
//	swap(&a, &b);//ʵ��
//	printf("������a=%d,b=%d\n", a, b);
//}
//���庯�����ж��Ƿ�������
//����ֻ�ܱ�1����������
//int is_prime(int y) {
//	for (int x = 2; x <= sqrt(y); x++) {
//		if (y % x == 0) {
//			//������������0
//			return 0;
//		}
//	}
//	//����������1
//	return 1;
//}
//int main() {
//	int a = 0;
//	scanf_s("%d",&a);
//	if (is_prime(a))
//		printf("%d������", a);
//	return 0;
//}
//�������ж��Ƿ�������
//���Ա�4�������Ҳ��ܱ�100���������Ա�400����
//is_leap_year(int year1) {
//	if ((year1 % 100!=0&&year1%4==0) || year1 % 400 == 0) {
//		//�����귵��1
//		return 1;
//	}
//	//�������귵����
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	if (is_leap_year(year))
//		printf("%d�꣬������",year);
//	return 0;
//}
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ�����Ԫ�ظ����ǲ����׵�
//������д����ֵʱ��Ĭ�Ϸ�������Ϊint
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
//	//�ҵ��ˣ������±�
//	//û�ҵ�������-1
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ%d", ret);
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
////�ݹ��ʵ��
//int main() {
//    unsigned int num = 0;
//    scanf_s("%u", &num);
//    print(num);//����һ�����Σ��޷��ţ���˳���ӡ����ÿһλ
//    return 0;
//}