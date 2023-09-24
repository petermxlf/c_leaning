#include <stdio.h>
#include <string.h>
void reverse(char* str) {
	char temp = *str;
	int len = strlen(str);
	*str=*(str+len-1);
	*(str + len - 1) = '\0';
	if(strlen(str+1)>=2)
		reverse(str + 1);
	*(str + len - 1) = temp;
}
//int main() {
//	//用递归的方式反转字符串
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
int DigitSum(unsigned int n) {//1234
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}
int main() {
	//求一个非负整数每一位之和
	unsigned int n = 0;
	scanf_s("%u", &n);
	int a=DigitSum(n);
	printf("%d\n",a );
	return 0;
}