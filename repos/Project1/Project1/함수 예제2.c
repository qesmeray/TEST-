#include <stdio.h>

// 2. sec���� �Է¹޾Ƽ�, �ð��� h�� m�� ����ϰ� m�� ��ȯ�ϴ� �Լ�����
// ��, 3600 �̻��� ���̶�� ���� �޽��� ���

int time(int s) { // int�� ���� 1�� ��û
    if (s >= 3600) { //���� �޽��� ���
        printf("����.\n");
        return -1;
    }
    else {
        //1�� * 60�� ,2�� * 120�� ,3�� * 180��....
        int h = s / 60;  //�� ����
        int m = s % 60;  //������ �� ����
        printf("%d�� %d��\n",h, m);
        return m;
    }
}

int main() {
    int seconds;
    scanf("%d", &seconds);
   
    time(seconds); 
    // ��ȯ���� msin���� ������ Ȱ��X (������ ������ ���� ���ؼ�)
}
    

    