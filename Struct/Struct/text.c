#include <stdio.h>



//����һ���ṹ��
//�����Ľṹ�����ͣ�struct pro
struct pro {
	char name[20];
	char tele[12];
	char sex[5];
	int high;
	
};
//�ṹ���Ա������ָ�롢���顢�����������ṹ��
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
	
}p1,p2;*///����ʹ��struct Pro�ṹ���ʹ���������������
//�ڴ�����������ȫ�ֽṹ���������
void print(struct pro* sp) {//�ṹ�����͵�ָ�����
	printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);//�ṹ��ָ��->��Ա����
}
void print1(struct pro sp) {
	printf("%s %s %s %d\n", sp.name, sp.tele, sp.sex, sp.high);//�ṹ�����.��Ա����
}
int main() {
	struct pro p1 = {"zhangsan","12345678901","man",177};//�����ṹ���������ʼ��
	struct st s = { {"lisi","12365443333","man",177},34,77.8 };

	/*printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.score);*/

	print(&p1);//���Ƚ���ʹ��
	print1(p1);
	return 0;
}