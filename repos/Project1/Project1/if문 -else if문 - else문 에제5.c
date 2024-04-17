#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //윤년 조건 : 4의 배수이면서 100의 배수가 아닌경우
    //          : 400의 배수인 경우

    // 1. 년도 입력받기
    int year;

    scanf("%d", &year);

    // 2. 윤년인지 아닌지 파악
    // ex) year이 4의 배수 -> year값이 4로 나누어 떨어진다.
    //     -> year값이 4로 나누었을 때 나머지가 0이다.
    //     -> year % 4 == 0
    
    // ex) year이 100의 배수가 아님 -> year값이 100으로 나누어 떨어지지 않는다
    //     -> year값이 100으로 나누었을 때 나머지가 0이 아니다.
    //     -> year % 100 ! == 0
    
    // && 연산자가 || 연산자보다 더 먼저 수행됨
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
       //윤년의 조건 1 or 0
        printf("1\n");
    else
        printf("0\n");
 
}