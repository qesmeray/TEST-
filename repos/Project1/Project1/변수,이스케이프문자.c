#include <stdio.h>

int main() {
	//변수 : 변할 수 있는 숫자
	//메모리 공간 중 한군데를 임의로 잡아 특정 정보를 담을 수 있는 공간(상자)

	//변수선언(생성) : [자료형] [변수이름];
	//값설정 : [변수이름]=[값];
	
	//= : 오른쪽 값을 왼쪽으로 대입하라
	//자료형 : 정수형(int),실수형(double),문자(char)
	int myint; //정수형 정보를 담을 수있는 myint 변수생성
	double myReal; //실수형 정보는 담을 수 있는 myReal 변수생성
	char mychar; //문자형 정보는 담을 수 있는 mychar 변수생성

	myint = 4;                           
	myReal = 2.5;
	mychar = 'a';
	//디버깅 : F5 =>오류탐색
	//변수 선언을 한 직후에는 쓰레기값이 들어간다
	//디버깅 모드에서 한줄씩 이동 : F11

	//return0; : 있어도되고 없어도 되고 =>"프로그램을 정상적으로 종료하라"

	//printf()로 변수값 출력하기
	printf("<변수값 출력하기>\n");
	printf("myint값:%d\n", myint);
	printf("myReal값:%.1f\n",myReal);
	printf("mychar값:%c\n",mychar);
	//이스케이프 문자 : 문법상 충돌이 일어날 문자 출력 시 사용



}	
