#include <stdio.h>
/*
冒泡排序的核心思想
把相邻的两个元素进行比较

*/
//行参是数组形式
//数组名本质上是数组首元素地址
//数组名确实是数组首元素地址
//但是有两个例外
//1、sizeof(数组名)这里的表示整个数组的大小，单位是字节
//2、&数组名,这里表示的是整个数组，取出的是整个数组的地址
void bubble_sort(int arr[],int sz) {
    int i = 0;
    int j = 0;
    int temp=0;
    //趟数
    for (i = 0; i < sz; i++) {
        //
        for (j = 0; j < sz - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                //交换
                temp= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//int main() {
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    //数组个数
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //冒泡排序算法，对数组进行排序
//    bubble_sort(arr,sz);
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}