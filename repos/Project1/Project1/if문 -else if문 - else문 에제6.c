#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {

    int coin, drink;

    printf("������ �־��ּ���:\n");
    scanf("%d", &coin);

    while (true) {
    
        if (coin < 800) {
        printf("%d������ �ܾ��� �����մϴ�. ������ �����մϴ�.\n", coin);
        break;
    }
        printf("�Ʒ��� ���� �� �ϳ��� �Է��ϼ���.\n");
        printf("1. �ݶ�(1000��)\n");
        printf("2. ���̴�(1100��)\n");
        printf("3. ��ī������Ʈ(1800��)\n");
        printf("4. ������(800��)\n");
        printf("5. ī���(2500��)\n");
        printf("0. ���� ����\n");
        printf("�޴�����: ");
            
        scanf("%d", &drink);
        
        if (drink == 1) {
            if (coin >= 1000) {
                coin -= 1000;
                printf("�ݶ� �����Ǿ����ϴ�. ���� �ݾ��� %d���Դϴ�.\n", coin);
            }
            else {
                printf("%d������ �ܾ��� �����մϴ�. ������ �����մϴ�.\n", coin);
                break;
            }
        }
        else if (drink == 2) {
            if (coin >= 1100) {
                coin -= 1100;
                printf("���̴ٰ� �����Ǿ����ϴ�. ���� �ݾ��� %d���Դϴ�.\n", coin);
            }
            else {
                printf("%d������ �ܾ��� �����մϴ�. ������ �����մϴ�.\n", coin);
                break;
            }
        }
        else if (drink == 3) {
            if (coin >= 1800) {
                coin -= 1800;
                printf("��ī������Ʈ�� �����Ǿ����ϴ�. ���� �ݾ��� %d���Դϴ�.\n", coin);
            }
            else {
                printf("%d������ �ܾ��� �����մϴ�. ������ �����մϴ�.\n", coin);
                break;
            }
        }
        else if (drink == 4) {
            if (coin >= 800) {
                coin -= 800;
                printf("������ �����Ǿ����ϴ�. ���� �ݾ��� %d���Դϴ�.\n", coin);
            }
            else {
                printf("%d������ �ܾ��� �����մϴ�. ������ �����մϴ�.\n", coin);
                break;
            }
        }
        else if (drink == 5) {
            if (coin >= 2500) {
                coin -= 2500;
                printf("ī��󶼰� �����Ǿ����ϴ�. ���� �ݾ��� %d���Դϴ�.\n", coin);
            }
            else {
                printf("%d������ �ܾ��� �����մϴ�. ������ �����մϴ�.\n", coin);
                break;
            }
        }
        else {
            printf("�̿����ּż� �����մϴ�.�Ž������� %d���Դϴ�.\n", coin);
            break;
        }
        }
    }

       
        


