#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    

    int arr[5]; // int �� �迭 ����
    int* ptarr; // ������ ���� ����

    // 5���� ���� �Է� �ޱ�
    printf("5���� ���ڸ� �Է��ϼ���: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // �迭�� ���� ����ϴ� ��� 1: �迭�� �ε����� �̿��� ����
    printf("��� 1: �迭�� �ε����� �̿��� ����\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ������ ���� ptarr�� arr �迭�� ���� �ּҷ� ����
    ptarr = arr;  //�ʱ�ȭ  //arr : �ܵ����� ���� �迭�� �����ּ�

    // �迭�� ���� ����ϴ� ��� 2: ������ ��� ������ �̿��� ����
    printf("��� 2: ������ ��� ������ �̿��� ����\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptarr + i));
        // 1)* ��� 
        // printf("%d ", *(ptarr + i));  -> ptarr : arr�� ù��° ���� ����� ����
        
        // 2)* �̻��
        //printf("%d ", ptarr[i]); -> ptarr�ܵ� ����� = arr�ܵ� �����
    }
    printf("\n");

}
    