#include <stdio.h>

int main() {
	//��°� �Է� : pruntf(),scanf()
	//����,���ڿ� �Է� : getchar(char),gets(char[])

	// %c�ʿ� ���鰪('\0')�̳� �ٹٲް�('\n')�� ���� ��� �߻�
	//���� : scanf()�� ���� �Է¹��� ����, �Է°����� �ӽ÷� �����ϴ� ����
	// rewind(stdin); => ���۸� ����ִ� ����
	
	int num;
	char ch ,c;
	scanf("%d  ",&num  );
	rewind(stdin);
	scanf("%c", &c);
    rewind(stdin);
	printf("%d %c %c", num ,ch ,c);

}
