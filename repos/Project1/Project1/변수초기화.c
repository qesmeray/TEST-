#include <stdio.h>

int main() {
	//변수이름은 임의로 변경 가능
	
	//변수초기화 : [자료형] [변수이름]=[값];
	int age = 25;
	double height = 165.2;
	char blood = 'a';
	
	//위에서 받은 값을 정해진 형식대로 출력하기
    printf("안녕하십니까,이수빈입니다.\n");
	printf("나이:%d\n", age);
	printf("키:%.1f(cm)\n", height);
	printf("혈액형:%c형\n", blood);
	printf("잘 부탁드립니다:)\n");



}