#include <stdio.h>


//float类型在内存中存储形式
//最高位是符号位S，接着八位是E位，最后二十三位是M位
//（-1）^S * M * 2^E
//double类型在内存中存储形式
//最高位是符号位S，接着十一位是E位，最后五十二位是M位
int main() {
	float f = 5.5;
	printf("%f\n", f);
	return 0;
}