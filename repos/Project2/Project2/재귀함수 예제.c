#include <stdio.h>

// main���� ���� num�� �Է¹ް� ����Լ��� Ȱ���Ͽ�
// num�� ���� ���丮��(!)���� main���� ����Ͽ���.

int factorial(int num) {
    printf("%d Ž�� ��\n", num);
    if (num == 1) {
        return 1;
    }
    // ��� ȣ��: n! = n * (n-1)!
    return num * factorial(num - 1);
}
int main() {
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    int result = factorial(num);

    // �Էµ� ������ ���丮�� ��� �� ���
    printf("%d\n", result);
}
   

   
