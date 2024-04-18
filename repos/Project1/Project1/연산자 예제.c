#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	//2개의 숫자를 입력받고 
	int num1 , num2 ;
	scanf("%d %d", &num1, &num2);
	
	//2개의 값을 비교하여 같은지 다른지 결과를 출력하라
	
	// 1) bool타입 변수로 참/거짓 여부 판별
	bool tf = (num1 == num2) ;
	(tf == true) ? printf("참입니다\n") :  printf("거짓입니다\n");
	
	// 2) 즉시 조건식을 대입하여 찹/거짓 여부 판별
	(num1 == num2) ? printf("참입니다") : printf("거짓입니다");



}