#include <stdio.h>

//�Ű����� : �Լ��� �����ϱ� ���� "�̸� ���޹޴�" ��
//��ȯ�� (�ڷ���) �Լ��̸� (�Ű�����Ÿ��1 �Ű�������1,....{
//     �Լ� ȣ�� �� ������ ��ɹ�;
// })

//�ڱ�Ұ��� ����ϴ� �Լ� ���� : �̸�(char[]), ����(int), ������(char)
void introduce(char name[], int age, char blood) {
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %c\n", blood);
}
int main() {
	//introduce() �Լ��� 3���� ���� (char[],int,char)�� �־��ְ� ������ �ؾ� ���� �����
	introduce("lee_subin",25,'A');
}
