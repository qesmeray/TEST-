#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//조건문 : 조건식의 결과에 따라 수행할 명령문을 달리할 때 사용
	//if문(대표적) : 만약에~

	//시험점수를 입력받고,pass인지 fail인지 출력(60점 이상이면 pass)
	//1. 시험 점수 입력
	int score;
	scanf("%d", &score);

	//2. pass인지 fail인지 결과 출력
	// if문 -else if문 - else문 (순서 역행 X)
	
	//if (조건식1) {조건식이 성립할 때 수행할 명령문 나열;}
    if (score >= 60 ) {   // pass인 경우
		printf("pass입니다\n");
	}
	if (score < 60) {   // fail인 경우
		printf("fail입니다\n");
	}

	else { printf("fail입니다\n"); }

	//else if 문 : 위 조건문을 만족하지 않고 이 조건문을 만족할 때 수행할 명령문 작성할 때 사용
	//else if (조건식2) {조건식1이 성립되지않고 조건식2가 성립될 때 수행할 명령문;}

	//else 문 : 위 조건문(들)을 만족하지 않을 때 수행할 명령문을 작성
	//else{  ;} =>위 조건문이 성립되지 않을 때 수행할 명령문 나열
	
}   