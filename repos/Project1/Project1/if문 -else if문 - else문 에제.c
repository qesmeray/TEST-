#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���Ǳ� ���α׷� �����

int main() {
    //���� �Է�
    int coin,drink;
    printf("������ �־��ּ���:\n");
    scanf("%d", &coin);
    
   //����� ������ �� �Է¹ޱ�
    printf("���Ḧ ����ּ���:\n");
    printf("1.�ݶ� 1000��\n" );
    printf("2.���̴� 1100��\n");
    printf("3.��ī������Ʈ 1800��\n" );
    printf("4.������ 800��\n" );
    printf("5.ī��� 2500��\n" );
    scanf("%d",&drink);
    
    //������ ���Ḧ �����ϱ⿡ ���� ����Ѱ�?
    // 1. coin�� ���� ������ ���� ������ �켱������ ������.
    if (drink == 1) {coin -=1000; }
    else if (drink == 2) { coin -= 1100; }
    else if (drink == 3) { coin -= 1800; }
    else if (drink == 4) { coin -= 800; }
    else if (drink == 5) { coin -= 2500; }
    
    // 2. ���� coin�� ���� �������� ��������� ��������. 
    //coin�� ��� or 0�̶�� �������� ��
    if (coin >= 0) {
        printf("���ᰡ ������\n");
        printf("�Ž�����:%d\n", coin);
    }
    //coin�� 0�̶�� �������� X
    else { printf("�ݾ��� ������"); }

    }



