#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//논리 연산자 : &, &&, |, ||, !

	//예제 : 점수를 입력받고 이에 알맞는 학점을 구해라
	//90~100 A /80~89 B /70~79 C /60~69 D /0~59 F

	// 1. 점수를 입력받기
	int score;
	
	printf("점수를 입력하세요\n");
	scanf("%d", &score);
	
	// 2. 입력값이 속하는 범위의 결과값 출력
	//&,&& : "그리고" , 
	//        2개의 조건식 중 하나라도 거짓이면 false 결과가 나타남
	//        &는 2개의 조건식을 모두 판별
	//        &&는 첫번째 식의 결과값에 따라 두번째 식을 볼수도있고 안볼수도있음
	
	//논리연산자를 이용 O : if(90 <= score && score <= 100)

	//논리연산자 이용 X
	if (score >= 90) { printf("A입니다.\n"); }
	else if (score >= 80) { printf("B입니다.\n"); }
	else if (score >= 70) { printf("C입니다.\n"); }
	else if (score >= 60) { printf("D입니다.\n"); }
	else  { printf("F입니다.\n"); }

		
}