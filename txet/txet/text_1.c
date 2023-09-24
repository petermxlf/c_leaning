#include <stdio.h>
//ctrl+f5执行
//ctrl+k+c注释
//int main()
//{
//	int g_val = 2022;
//	printf("%d\n", g_val);
//	return 0;
//}
//extern int add1;
//int main() {
//    //int a, b;
//    //scanf_s("%d %d", &a, &b);
//    //printf("%d\n", a + b);
//    //int i, j;
//    //for (i = 0; i < 6; i++) {
//    //    for (j = 0;j<=i; j++) {
//    //        printf("*");
//    //    }printf("\n");
//    //}
//    //j += add1;
//    //printf("%d\n", j);
//    return 0;
//}
//int main() {
    //不推荐这样赋值
 /*   char ch = "hello world";*/
    //printf("%s\n", ch);
    /*int sum = 0;
    int i, j, k;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) {
                if (i != j && i != k && j != k) {
                    printf("%d%d%d\n", i, j, k); sum++;
                }
            }
        }
    }printf("共有：%d个", sum);*/
    //double i;
    //scanf_s("%lf", &i);
    //double money = 0;
    //if (i <= 100000) {
    //    money = i * 0.1;
    //}
    //else if (i > 100000 && i <= 200000) {
    //    money = i * 0.075;
    //}
    //else if (i > 200000 && i <= 400000) {
    //    money = i * 0.05;
    //}
    //else if (i > 400000 && i <= 600000) {
    //    money = i * 0.03;
    //}
    //else if (i > 600000 && i <= 1000000) {
    //    money = i * 0.015;
    //}
    //else {
    //    money = i * 0.01;
    //}printf("奖金：%.2lf", money);
 /*   int year, mon, day,sum;
    printf("please input year,mon,day:");
    scanf_s("%d %d %d", &year, &mon, &day);
    sum = day;
    if (day > 31) { printf("404"); return 0; }
    switch (mon) {
    case 2:sum += 31; break;
    case 3:sum += 59; break;
    case 4:sum += 90; break;
    case 5:sum += 120; break;
    case 6:sum += 151; break;
    case 7:sum += 181; break;
    case 8:sum += 212; break;
    case 9:sum += 243; break;
    case 10:sum += 273; break;
    case 11:sum += 304; break;
    case 12:sum += 334; break;
    }
    if (year % 100 != 0 && year % 4 == 0&&mon>2)sum++;
    printf("%d年%d月%d日是今年的%d天", year, mon, day, sum);
    return 0;
}*/
//int main() {
//    int a, b, c, d;
//    scanf_s("%d,%d,%d", &a, &b, &c);
//    if (a > b) {
//        d = a;
//        a = b;
//        b = d;
//    }
//    if (a > c) {
//        d = a;
//        a = c;
//        c = d;
//    }
//    if (b > c) {
//        d = b;
//        b = c;
//        c = d;
//    }
//    printf("%d<%d<%d", a, b, c);
//    return 0;
//}
//int main()
//{
//    int a, b, shang, yu;
//    printf("依次输入被除数和除数（不为零）小于10000，中间用空格隔开");
//    scanf_s("%d %d", &a, &b);
//    shang = a / b;
//    yu = a % b;
//    printf("%d %d", shang, yu);
//    return 0;
//}
//int main()
//{
//    int year;
//    int month, date;
//    scanf_s("%4d%2d%2d", &year, &month, &date);
//    printf("%d,%02d,%02d", year, month, date);
//    return 0;
//}
//int main() {
//    int i = 1;
//    int n = 0, sum = 1;
//    scanf_s("%d", &n);
//    while (i <= n) {
//        sum *= i;
//        i++;
//    }printf("%d\n", sum);
//    return 0;
//} 