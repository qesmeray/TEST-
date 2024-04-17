#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// while, for문 : 조건을 따지고 부합하면 실행 (반복)
	for (int i = 0; i != 0; i++) {
	//// i의 시작값이 0이기 때문에 조건식에 부합하지않음 -> 출력값이 아예 없음
		printf("반복문이 실행됩니다\n ");
	}
	// do-while문 : 반드시 한번은 실행이 되는 반복문
	// 우선은 실행을 하고 조건을 따지면서 반복을 할지 결정 (반복)
	
	// do {  적어도 한번은 수행할 명령문
	// } while(조건식)

	//예제 : 1부터 10까지 출력하는 프로그램
	int i = 1;
	do {
		printf("%d\n",i);
		i++;
	} while (i <= 10);

	//조건식에 상관없이 무조건 한번은 실행이 된다.
	int tf = 0;
	do {
		printf("do-while문이 실행되었습니다.\n");
	} while (tf != 0);
	
}