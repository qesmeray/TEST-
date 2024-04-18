#include <stdio.h>

// 재귀함수 : 자기 자신(함수 자신)을 부르는 함수
// 함수 구현 : 전달받은 n 값에 따라서 n ~ 1까지 출력하는 함수 (n은 자연수)
int print(int n) {
	printf("%d\n",n);
	
	if (n == 1) {
		printf("print() 함수를 종료합니다\n");
		return 0;
	}
	return print(n - 1);  // 자기자신을 호출(재귀함수의 핵심)
}
int main() {
	int num;
	scanf("%d",&num);

	print(num);
}
