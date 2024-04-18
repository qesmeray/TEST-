#include <stdio.h>

int main() {
    int N;

    // 자연수 N 입력 받기
    scanf("%d", &N);

    // 1부터 N까지 출력
    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}