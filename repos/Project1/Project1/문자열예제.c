#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //���� 2743����
    //���ڿ��� �Է¹ް�, ���ڿ��� ���̸� ���

    // 1. ���ڿ� �Է�(�ܾ� ���̴� ��� 100)
    char word[101]; 
    scanf("%s", &word);
   
    // 2. ���ڿ� ���� ���� (���̸� ������ ���� �ʿ�)
    int length = 0;
    for (int i = 0; word[i] != '\0'; i++) { //'\0'�� ������ ��� ���� ����
        length++;  //���ڸ� ������ �� ������ ��ɹ� -> '\0'�� �ƴ� ���ڸ� ���� �� 
    }
    printf("%d\n", length);

   
}

    

    

    


