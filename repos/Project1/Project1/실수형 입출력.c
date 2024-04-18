#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //2개의 숫자를 입력받고 나눗셈결과를 출력하라
    //2개의 숫자는 정수형으로 받고 결과는 소수점까지 나오게하라

    int a, b;
    
    scanf("%d %d", &a , &b);
   
    printf("%f\n",(double)a / b);

}