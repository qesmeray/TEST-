#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//자판기 프로그램 만들기

int main() {
    //동전 입력
    int coin,drink;
    printf("동전을 넣어주세요:\n");
    scanf("%d", &coin);
    
   //음료수 선택지 및 입력받기
    printf("음료를 골라주세요:\n");
    printf("1.콜라 1000원\n" );
    printf("2.사이다 1100원\n");
    printf("3.포카리스웨트 1800원\n" );
    printf("4.레쓰비 800원\n" );
    printf("5.카페라떼 2500원\n" );
    scanf("%d",&drink);
    
    //선택한 음료를 구매하기에 돈이 충분한가?
    // 1. coin에 대해 선택한 음료 가격을 우선적으로 빼본다.
    if (drink == 1) {coin -=1000; }
    else if (drink == 2) { coin -= 1100; }
    else if (drink == 3) { coin -= 1800; }
    else if (drink == 4) { coin -= 800; }
    else if (drink == 5) { coin -= 2500; }
    
    // 2. 현재 coin의 값이 음수인지 양수인지를 따져본다. 
    //coin이 양수 or 0이라면 음료제공 ㅇ
    if (coin >= 0) {
        printf("음료가 제공됨\n");
        printf("거스름돈:%d\n", coin);
    }
    //coin이 0이라면 음료제공 X
    else { printf("금액이 부족함"); }

    }



