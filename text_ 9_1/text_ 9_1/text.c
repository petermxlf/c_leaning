#include "text.h"

//int test(const char* ch) {
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	int (*pf)(const char* ch) = test;
//	//(*pf)("abc");//(*)����ʡ�ԣ�����Ŀ����Ϊ��һ�۾����ϳ���һ��ָ��
//	//pf("abc");
//	//printf("%u\n", sizeof(pf));
//	return 0;
//}

//int main() {
//	int input = 0;
//	do {
//		test();//��ʼ���
//		printf("��ѡ��\n");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

int main()
{
	//int(*pf) = Add;//����ָ��
	int (*arr[4])(int, int) = { Add,Sub,mul,div };//���κ���ָ������
	//��������
	int i = 0;
	/*for (i = 0; i < 4; i++) {
		int ret = arr[i](4, 5);
		printf("%d\n", ret);
	}*/
	//int(*(*ppf)[4])(int ,int) = &arr;//ָ����ָ�������
	return 0;
}