#include <stdio.h>
/*
ð������ĺ���˼��
�����ڵ�����Ԫ�ؽ��бȽ�

*/
//�в���������ʽ
//��������������������Ԫ�ص�ַ
//������ȷʵ��������Ԫ�ص�ַ
//��������������
//1��sizeof(������)����ı�ʾ��������Ĵ�С����λ���ֽ�
//2��&������,�����ʾ�����������飬ȡ��������������ĵ�ַ
void bubble_sort(int arr[],int sz) {
    int i = 0;
    int j = 0;
    int temp=0;
    //����
    for (i = 0; i < sz; i++) {
        //
        for (j = 0; j < sz - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                //����
                temp= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//int main() {
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    //�������
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //ð�������㷨���������������
//    bubble_sort(arr,sz);
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}