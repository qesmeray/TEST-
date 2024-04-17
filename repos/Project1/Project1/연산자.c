#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//연산자 : 연산을 수행하는 기호
	//대입연산자 : = (오른쪽값을 왼쪽으로 대입한다)
	//산술연산자 : + , - , * , / , %
	// /  : 나누기,몫 결과값
	// %  : 나누기,나머지 결과값 -> 양 옆의 2개의 숫자가 정수여야함

	//(int) / (int) -> 나누기 몫이 결과로 나옴
	//숫자 2개중 하나라도 실수형이면 소수점 나누기 결과를 줌

	//int 로 입력받기
	int a, b;
	scanf("%d %d", &a, &b);

	//소수점이 있는 나누기 결과 출력
	//변수a의 타입 자체에는 변경하지 않고 a가 가진 값에 대해서만 타입을 명시적 변경 => 명시적 형변환
	double result = (double)a / b;
	printf("%f", result);

	//산술연산자 + 대입연산자 = 복합대입연산자
    // 1. 2개 숫자 입력받기
	int num1, num2;
	scanf("%d %d",&num1, &num2);

	num1 += num2; //2개의 숫자합을 num1에 저장    =  [ num1 = num1 + num2  ]
	printf("현재 num1 + num2 결과 : %d\n", num1 );
	num1 -= num2;
	printf("현재 num1 - num2 결과 : %d\n", num1);
	num1 *= num2;
	printf("현재 num1 * num2 결과 : %d\n", num1);
	num1 /= num2;
	printf("현재 num1 / num2 결과 : %d\n", num1);
	num1 %= num2;
	printf("현재 num1 %% num2 결과 : %d\n", num1); // %d 랑 중복이 되기때문에 %%로 사용

}
