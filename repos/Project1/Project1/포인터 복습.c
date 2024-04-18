#include <stdio.h>

int main() {
	//포인터(point) : "가리키는 것"
	// 포인터 변수에는 가리키고자 하는 변수의 주소값을 갖는다.
	// * , &

	//포인터 변수 선언 , 초기화
	int n = 10;
	int * num = &n;
	// *num변수를 통해서 n의 주소값돠 실질적인 값을 호출할수있다.
	printf("n의 주소값 : %d\n", num);
	printf("n의 값 : %d\n\n", *num);
	// * : 갖고있는 주소값으로 다른 변수를 가리킴

	//문자열을 가리키는 포인터 변수 (char)사용
	char name[] = "lee_subin";
	printf("첫번째 글자 : %c\n",name[0]);
	printf("이름 : %s\n\n", name);

	char* ptname = name;
	printf("첫번째 글자 : %c\n", *(ptname + 0));
	printf("첫번째 글자 : %c\n", ptname[0]);
	printf("이름 : %s\n", ptname);
}