//����һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е���������ż������
//
//#include <stdio.h>
//void move_arr(int arr[], int a) {
//	int left = 0;
//	int right = a - 1;
//	while (left<right) {
//		//����߿�ʼ�����ж��Ƿ�Ϊż��
//		if (arr[left] % 2 == 0) {
//			while (left<right) {
//				//���Ϊż�������ұߵ�һ����ʼ�ж��Ƿ�Ϊ������Ȼ��λ
//				if (arr[right] % 2 != 0) {
//					//����λ��
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
//	//��������Ԫ��
//	for (i = 0; i < a; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	//����Ԫ��λ��
//	move_arr(arr,a);
//	//�������
//	/*for (i = 0; i < a; i++) {
//		printf("%d\t", arr[i]);
//	}*/
//	return 0;
//}

#include <stdio.h>

//int main()
//{
	//abcdef��һ�������ַ������ɸ��ģ���*p���Ա�����,Ϊ��ֹ������Ҫ��const����
	//const char* p = "abcdef";//��abcdef��a�ĵ�ַ��ֵ����p
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

//ָ������
//int main() {
//
//	
//
//	//int ar1[] = { 1,2,3,4,5 };
//	//int ar2[] = { 1,2,3,4,5 };
//	//int ar3[] = { 1,2,3,4,5 };
//
//	//int* arr1[3] = { ar1,ar2,ar3 };//����ָ������
//	//char* arr2[5];//�ַ�ָ������
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
//	int* p1[10];//ָ������
//	int(*p2)[10];//����ָ��,p2����ָ��һ�����飬����10��Ԫ��Ϊint����
//	return 0;
//}
//������ͨ����ʾ����������Ԫ�ص�ַ
//��������������
//sizeof������������ʾ������������Ĵ�С
//&��������ȡ������Ȼ����������ĵ�ַ

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
//	int(*p)[10] = &arr;//����ָ��
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);


	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	//��ά�������Ԫ�������ĵ�һ��
	//print1(arr, 3, 5);

	//��ά������п���ʡ�ԣ������в���ʡ��

	//����ָ�� -- ָ������ָ��
	int (*pf)(int, int) = &Add;
	//&������ -- �õ����Ǻ����ĵ�ַ,ÿ�����������Լ��ĵ�ַ
	//printf("%p\n", &print1);
	/*printf("%p\n", &Add);
	printf("%p\n", Add);*/
	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ

	int ret=(*pf)(2, 3);
	printf("%d\n", ret);
	return 0;
}