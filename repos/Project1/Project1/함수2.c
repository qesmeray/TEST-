#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� : "���",���� ��ɹ��� �ϳ��� ����� ��

// <�Լ� ���� ����>
// ��ȯ�� �Լ��̸�() {
// �Լ� ȣ�� �� ������ ��ɹ�;
// }

//��ȯ�� : return ������ ���ؼ� �� ���� Ÿ��
// "��ȯ�ϴ�"(return) != "����ϴ�"(printf)
// void : �ƹ��͵� ����
// NULL : "����", ���� ���������ʴ� != 0,false
// int num = NULL;   //���� �������� ����

// ��ȯ���� void�̸�, return���� �ۼ�X 
void print() {
	// print()�Լ��� main���� ȣ������ ������ ������ �ȵ�
	printf("���α׷��� �����մϴ�\n");
}
int Return_One() {  
	return 1;    //return : ��ȯ�ϴ�
	// 1�� ���� (int��)
}

// main �Լ�
int main() {
	// �Լ�ȣ�� : �Լ��̸�();
	print();    // print() �Լ� ȣ��

	printf("Return_One() �Լ� ��ȯ�� : %d\n", Return_One()); 

	// return 0;  -> 0�� ��ȯ�Ѵ�
	//    -> ���α׷��� ���������� �����Ѵ�
}
