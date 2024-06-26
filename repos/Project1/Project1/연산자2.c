#include <stdio.h>
#include <stdbool.h>  //bool 타입사용

int main() {
	//증감연산자 : 증가/감소 (++ / --)

	int n = 100;
	n++;
	printf("n의 값 : %d\n", n); //1이 증가하여 101로 출력
	
	printf("n의 값 : %d\n", n++); //후위 증가 연산자 : n의 현재 값을 출력한 후에 1이 증가
	//100을 출력 후 1이 증가 => 101
	printf("n의 값 : %d\n", ++n); //전위 증가 연산자 : n이 먼저 1 증가한 후에 그 증가된 값을 출력
	//101에서 1이 증가해서 102를 출력

	// ! : 부정연산자 (~이 아니다)
	// bool 자료형 : 참/거짓 값만 가짐
	//비교연산자 : <, <=, >, >=, ==(같다), !=(다르다)
	// 1 : 참 / 0 : 거짓
	bool tf = (1 == 2);   // tf = false
	printf("1==2 결과 : %d\n", tf );      // 0
	printf("1<=5 결과 : %d\n", (1 <= 5));        // 1
	printf("1!=10 결과 : %d\n", (1 != 10));       // 1

	//삼항 연산자 :  ?   =>  (조건식) ? (참일 때 수행할 명령문) : (거짓일 때 수행할 명령문)
	bool t = (1 == 1) ? true : false ;  
	//1과 1이 같다면 t에 true를 저장하라. 아니라면 false를 저장하라.

	printf("t결과값 : %d\n", t);
	(1 == 1) ? printf("참입니다") : printf("거짓입니다");

}