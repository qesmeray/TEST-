#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    

    int arr[5]; // int 형 배열 선언
    int* ptarr; // 포인터 변수 선언

    // 5개의 숫자 입력 받기
    printf("5개의 숫자를 입력하세요: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열의 값을 출력하는 방법 1: 배열의 인덱스를 이용한 접근
    printf("방법 1: 배열의 인덱스를 이용한 접근\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 포인터 변수 ptarr를 arr 배열의 시작 주소로 설정
    ptarr = arr;  //초기화  //arr : 단독으로 쓰면 배열의 시작주소

    // 배열의 값을 출력하는 방법 2: 포인터 산술 연산을 이용한 접근
    printf("방법 2: 포인터 산술 연산을 이용한 접근\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptarr + i));
        // 1)* 사용 
        // printf("%d ", *(ptarr + i));  -> ptarr : arr의 첫번째 값이 저장된 공간
        
        // 2)* 미사용
        //printf("%d ", ptarr[i]); -> ptarr단독 사용결과 = arr단독 사용결과
    }
    printf("\n");

}
    