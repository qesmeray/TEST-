#include <stdio.h>

// main에서 숫자 num을 입력받고 재귀함수를 활용하여
// num에 대한 팩토리얼(!)값을 main에서 출력하여라.

int factorial(int num) {
    printf("%d 탐색 중\n", num);
    if (num == 1) {
        return 1;
    }
    // 재귀 호출: n! = n * (n-1)!
    return num * factorial(num - 1);
}
int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int result = factorial(num);

    // 입력된 숫자의 팩토리얼 계산 및 출력
    printf("%d\n", result);
}
   

   
