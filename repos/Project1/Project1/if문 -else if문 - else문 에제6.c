#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {

    int coin, drink;

    printf("동전을 넣어주세요:\n");
    scanf("%d", &coin);

    while (true) {
    
        if (coin < 800) {
        printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
        break;
    }
        printf("아래의 숫자 중 하나를 입력하세요.\n");
        printf("1. 콜라(1000원)\n");
        printf("2. 사이다(1100원)\n");
        printf("3. 포카리스웨트(1800원)\n");
        printf("4. 레쓰비(800원)\n");
        printf("5. 카페라떼(2500원)\n");
        printf("0. 실행 종료\n");
        printf("메뉴선택: ");
            
        scanf("%d", &drink);
        
        if (drink == 1) {
            if (coin >= 1000) {
                coin -= 1000;
                printf("콜라가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin);
            }
            else {
                printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
                break;
            }
        }
        else if (drink == 2) {
            if (coin >= 1100) {
                coin -= 1100;
                printf("사이다가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin);
            }
            else {
                printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
                break;
            }
        }
        else if (drink == 3) {
            if (coin >= 1800) {
                coin -= 1800;
                printf("포카리스웨트가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin);
            }
            else {
                printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
                break;
            }
        }
        else if (drink == 4) {
            if (coin >= 800) {
                coin -= 800;
                printf("레쓰비가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin);
            }
            else {
                printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
                break;
            }
        }
        else if (drink == 5) {
            if (coin >= 2500) {
                coin -= 2500;
                printf("카페라떼가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin);
            }
            else {
                printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
                break;
            }
        }
        else {
            printf("이용해주셔서 감사합니다.거스름돈은 %d원입니다.\n", coin);
            break;
        }
        }
    }

       
        


