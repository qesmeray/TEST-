#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 5 // 사용자가 실패할 수 있는 최대 횟수
#define MAX_WORD_LENGTH 100 // 단어의 최대 길이

// 게임 함수 선언
void game1();
void game2();
void game3();

int main() {
    int choice;
    printf("\n\n\n\n");
    printf("                 ■■   ■■  ■■  ■■  ■■  ■■\n");
    printf("                 ■■■ ■■■  ■■  ■■■ ■■  ■■\n");
    printf("                 ■■ ■ ■■  ■■  ■■ ■■■  ■■\n");
    printf("                 ■■   ■■  ■■  ■■  ■■  ■■\n");
    printf("                 ■■   ■■  ■■  ■■  ■■  ■■\n");
    printf("\n");
    printf("             ■■■■■■    ■■■■    ■■      ■■  ■■■■■■\n");
    printf("             ■■■■■■  ■■    ■■  ■■      ■■  ■■■■■■\n");
    printf("             ■■          ■■ ■ ■■  ■■■  ■■■  ■■\n");
    printf("             ■■  ■■■  ■■ ■ ■■  ■■  ■  ■■  ■■■■■■\n");
    printf("             ■■    ■■  ■■    ■■  ■■      ■■  ■■\n");
    printf("             ■■■■■■  ■■    ■■  ■■      ■■  ■■■■■■\n");
    printf("             ■■■■■■  ■■    ■■  ■■      ■■  ■■■■■■\n");

    // 메뉴 출력
    printf("┌───────────────────────┐\n");
    printf("│     1 . 행   맨       │\n");
    printf("└───────────────────────┘\n");
    printf("┌───────────────────────┐\n");
    printf("│     2 . 오   목       │\n");
    printf("└───────────────────────┘\n");
    printf("┌───────────────────────┐\n");
    printf("│  3 . 장애물 피하기    │\n");
    printf("└───────────────────────┘\n");
    printf("원하는 게임을 선택하세요 (1-3): ");
    scanf("%d", &choice);

    // 선택에 따라 게임 실행
    switch (choice) {
    case 1:
        game1(); // 행맨 게임 실행
        break;
    case 2:
        game2(); // 오목 게임 실행
        break;
    case 3:
        game3(); // 장애물 피하기 게임 실행
        break;
    default:
        printf("잘못된 선택입니다.\n");
    }
}

// 행맨 게임 함수
void game1() {
    printf("행맨 게임을 실행합니다.\n");
    char word[] = "HELLO"; // 행맨 게임에서 추측할 단어
    int len = strlen(word);
    char guessed[MAX_WORD_LENGTH]; // 추측한 글자를 저장할 배열
    int tries = 0; // 현재 실패한 횟수
    int i;

    // guessed 배열 초기화
    for (i = 0; i < len; i++) {
        guessed[i] = '_';
    }
    guessed[len] = '\0'; // 문자열 끝을 나타내는 널 문자 추가

    printf("Welcome to Hangman!\n");

    while (tries < MAX_TRIES) {
        printf("Current word: %s\n", guessed);
        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);
        guess = toupper(guess); // 대문자로 변환

        // 추측한 글자가 단어에 있는지 확인하고 guessed에 적용
        int found = 0;
        for (i = 0; i < len; i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                found = 1;
            }
        }

        // 틀린 경우 실패한 횟수 증가
        if (!found) {
            tries++;
            printf("Incorrect guess! Tries remaining: %d\n", MAX_TRIES - tries);
        }
        else {
            printf("Correct guess!\n");
        }

        // 모든 글자를 맞추었는지 확인
        if (strcmp(word, guessed) == 0) {
            printf("Congratulations! You guessed the word: %s\n", word);
            break;
        }
    }

    // 실패한 경우
    if (tries == MAX_TRIES) {
        printf("Sorry, you failed to guess the word. The word was: %s\n", word);
    }
}

// 오목 게임 함수
void game2() {
    printf("오목 게임을 실행합니다.\n");
    // 오목 게임 코드 작성
}
// 장애물 피하기 게임 함수
void game3() {
    printf("장애물 피하기 게임을 실행합니다.\n");
    // 장애물 피하기 게임 코드 작성
}

    







