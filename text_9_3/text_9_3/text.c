#include <stdio.h>
#include<assert.h>

char* my_strcpy(char *dest,const char*src) {
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int my_strcmp(const char* dest,const char* src) {
	assert(dest && src);
	while (*dest++ && *src++) {
		if (*dest > *src) {
			return 1;
		}
		else if (*dest < *src) {
			return -1;
		}
	}
	return 0;
}
//int main() {
//	char arr1[] = "abc";
//	char arr2[20] = { 0 };
//	char arr3[] = "abc";
//	//将arr1中的字符串拷贝到arr2
//	/*my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);*/
//	int ret=my_strcmp(arr1, arr3);
//	printf("%d\n", ret);
//	return 0;
//}
int main() {
	char arr[] = "abbbcde";
	char arr1[3] = "bbc";
	char * ch=my_strstr(arr, arr1);
	printf("%s\n", ch);
	return 0;
}