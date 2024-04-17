#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    //사분면 고르기
    // 1. x , y 좌표 입력받기
	int x, y;

	printf("X,Y 좌표를 입력하시오: \n");
	scanf("%d %d", &x , &y);

    // 2. 어느 사분면에 있는지 확인, 결과 출력
    // 1사분면(+ , +)/2사분면(- , +)/3사분면(- , -)/4사분면(+ , -)
    if (x > 0 && y > 0)
    {   //1사분면
        printf("1\n", x, y);
    }
    else if (x < 0 && y > 0)
    {   //2사분면
        printf("2\n", x, y);
    }
    else if (x < 0 && y < 0)
    {   //3사분면
        printf("3\n", x, y);
    }
    else
    {   //4사분면
        printf("4.\n");
    }

}
