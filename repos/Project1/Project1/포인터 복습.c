#include <stdio.h>

int main() {
	//������(point) : "����Ű�� ��"
	// ������ �������� ����Ű���� �ϴ� ������ �ּҰ��� ���´�.
	// * , &

	//������ ���� ���� , �ʱ�ȭ
	int n = 10;
	int * num = &n;
	// *num������ ���ؼ� n�� �ּҰ��� �������� ���� ȣ���Ҽ��ִ�.
	printf("n�� �ּҰ� : %d\n", num);
	printf("n�� �� : %d\n\n", *num);
	// * : �����ִ� �ּҰ����� �ٸ� ������ ����Ŵ

	//���ڿ��� ����Ű�� ������ ���� (char)���
	char name[] = "lee_subin";
	printf("ù��° ���� : %c\n",name[0]);
	printf("�̸� : %s\n\n", name);

	char* ptname = name;
	printf("ù��° ���� : %c\n", *(ptname + 0));
	printf("ù��° ���� : %c\n", ptname[0]);
	printf("�̸� : %s\n", ptname);
}