#include <stdio.h>

// a부터 b까지곱하는 함수 만들고 a*...*b=결과 출력하고 반환값 주는 함수 만들기(a < b)
int multi(int a, int b) {  // () : 매개변수 "선언"하는 공간
    int result = 1;
    for (int i = a; i <= b; i++) {
        result *= i;
        printf("%d", i);
        if (i != b) {
            printf("X");
        }
    }
    printf("\n");
    return result;
   
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("total : %d\n", multi(a,b));

    
}


    
    