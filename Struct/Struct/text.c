#include <stdio.h>



//创建一个结构体
//声明的结构体类型：struct pro
struct pro {
	char name[20];
	char tele[12];
	char sex[5];
	int high;
	
};
//结构体成员可以是指针、数组、标量、其他结构体
struct st {
	struct pro p;
	int num;
	float score;
};
/*struct pro {
		char name[20];
		char tele[12];
		char sex[5];
		int high;
	
}p1,p2;*///这是使用struct Pro结构类型创建的两个变量，
//在大括号外面是全局结构体变量变量
void print(struct pro* sp) {//结构体类型的指针接收
	printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);//结构体指针->成员变量
}
void print1(struct pro sp) {
	printf("%s %s %s %d\n", sp.name, sp.tele, sp.sex, sp.high);//结构体变量.成员变量
}
int main() {
	struct pro p1 = {"zhangsan","12345678901","man",177};//创建结构体变量并初始化
	struct st s = { {"lisi","12365443333","man",177},34,77.8 };

	/*printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.score);*/

	print(&p1);//优先建议使用
	print1(p1);
	return 0;
}