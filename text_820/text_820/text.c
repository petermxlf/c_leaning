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
//	//�õݹ�ķ�ʽ��ת�ַ���
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
	//��һ���Ǹ�����ÿһλ֮��
	unsigned int n = 0;
	scanf_s("%u", &n);
	int a=DigitSum(n);
	printf("%d\n",a );
	return 0;
}