#include <stdio.h>

// a���� b�������ϴ� �Լ� ����� a*...*b=��� ����ϰ� ��ȯ�� �ִ� �Լ� �����(a < b)
int multi(int a, int b) {  // () : �Ű����� "����"�ϴ� ����
    int result = 1;
    for (int i = a; i <= b; i++) {
        result *= i;
        printf("%d", i);
        if (i != b) {
            printf("X");
        }
    }
    printf("\n");
    return result;
   
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("total : %d\n", multi(a,b));

    
}


    
    