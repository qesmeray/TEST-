#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//2개의 숫자 (n,m)입력받고 n부터 m까지의 숫자들 중 3의 배수만 순차적으로 출력하라.

	int n, m;

	printf("첫번째 숫자를 입력하세요:\n ");
	scanf("%d", &n);
	printf("두번째 숫자를 입력하세요:\n ");
	scanf("%d", &m);

	printf("%d부터 %d까지의 3의 배수:\n", n, m);
	
	//while 문
	int i = n;
	while (i <= m) {
		if (i % 3 == 0) { //변수 i를 3으로 나눈 나머지가 0인지를 확인하는 조건
			              // -> i가 3의 배수인지를 검사하는 것 
			printf("%d\n",i);
		}
		i++;
	}
	//for 문
	for (int i = n; i <= m; i++) 
		if (i % 3 == 0) {  //변수 i를 3으로 나눈 나머지가 0인지를 확인하는 조건
			               // -> i가 3의 배수인지를 검사하는 것      
			printf("%d\n", i);
		}

}
		
