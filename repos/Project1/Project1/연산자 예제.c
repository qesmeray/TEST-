#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	//2���� ���ڸ� �Է¹ް� 
	int num1 , num2 ;
	scanf("%d %d", &num1, &num2);
	
	//2���� ���� ���Ͽ� ������ �ٸ��� ����� ����϶�
	
	// 1) boolŸ�� ������ ��/���� ���� �Ǻ�
	bool tf = (num1 == num2) ;
	(tf == true) ? printf("���Դϴ�\n") :  printf("�����Դϴ�\n");
	
	// 2) ��� ���ǽ��� �����Ͽ� ��/���� ���� �Ǻ�
	(num1 == num2) ? printf("���Դϴ�") : printf("�����Դϴ�");



}