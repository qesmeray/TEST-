#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //백준 27866번 문제
    //단어의 길이는 최대 1000

    //문자열 : 여러개의 문자 -> 배열 학습이 필요
    // "프로그램이 자체적으로 삽입하는 문자열의 끝('\0')과 입력값이 충돌이 일어나지 않게끔 공간을 넉넉히 설정하기"
    // 1. 문자열(char형 배열), 출력할 문자 위치 입력

    char S[1001];
    int N;

    scanf("%s %d", &S ,&N);
    

    // 2. 정답 출력 (문자열의 문자들 중 "특정위치의 문자를 출력")
    printf("%c\n", S[N - 1]); //배열번호가 0번부터 시작하기때문에 - 1
            
  }

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    int N;
//    char S[1000];
//
//    scanf("%s", S);
//    scanf("%d", &N);
//
//    for (int i = 0; S[i] != '\0'; i++) {  
//    => 널문자 '\0':문자열에 속한 데이터가 끝나면, 문자열의 끝을 의미하는 문자
//       아스키코드값은 0
//       
//       if (i == N - 1) {
//       printf("%c\n", S[i]);
//          
//        }
//    }
   

    
    

    


