#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���� : n�� �Է¹ް� , n���� ���ڸ� �Է¹޾ƶ�.
	//n���� ���ڵ� �� ���� ū ���� (�ִ�)�� �������� ����϶�.
	//( �̶� n���� ���ڵ��� ��� �ڿ����̴�.)

	// 1. n �Է¹ޱ�
	int n;
	scanf("%d",&n);

	// 2. n���� ���ڸ� �Է¹޾ƶ� -> scanf()�� n�� �����϶�.
	int max = 0;   //������ ����
	int t = 0;
	while (t < n) {
		int num;
		scanf("%d", &num);

		if (max < num) {
			max = num;
		}
		
		t++;
	}
	printf("%d",max);
}
		
		


	