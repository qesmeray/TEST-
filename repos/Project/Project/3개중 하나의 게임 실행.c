#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 5 // ����ڰ� ������ �� �ִ� �ִ� Ƚ��
#define MAX_WORD_LENGTH 100 // �ܾ��� �ִ� ����

// ���� �Լ� ����
void game1();
void game2();
void game3();

int main() {
    int choice;
    printf("\n\n\n\n");
    printf("                 ���   ���  ���  ���  ���  ���\n");
    printf("                 ���� ����  ���  ���� ���  ���\n");
    printf("                 ��� �� ���  ���  ��� ����  ���\n");
    printf("                 ���   ���  ���  ���  ���  ���\n");
    printf("                 ���   ���  ���  ���  ���  ���\n");
    printf("\n");
    printf("             �������    �����    ���      ���  �������\n");
    printf("             �������  ���    ���  ���      ���  �������\n");
    printf("             ���          ��� �� ���  ����  ����  ���\n");
    printf("             ���  ����  ��� �� ���  ���  ��  ���  �������\n");
    printf("             ���    ���  ���    ���  ���      ���  ���\n");
    printf("             �������  ���    ���  ���      ���  �������\n");
    printf("             �������  ���    ���  ���      ���  �������\n");

    // �޴� ���
    printf("��������������������������������������������������\n");
    printf("��     1 . ��   ��       ��\n");
    printf("��������������������������������������������������\n");
    printf("��������������������������������������������������\n");
    printf("��     2 . ��   ��       ��\n");
    printf("��������������������������������������������������\n");
    printf("��������������������������������������������������\n");
    printf("��  3 . ��ֹ� ���ϱ�    ��\n");
    printf("��������������������������������������������������\n");
    printf("���ϴ� ������ �����ϼ��� (1-3): ");
    scanf("%d", &choice);

    // ���ÿ� ���� ���� ����
    switch (choice) {
    case 1:
        game1(); // ��� ���� ����
        break;
    case 2:
        game2(); // ���� ���� ����
        break;
    case 3:
        game3(); // ��ֹ� ���ϱ� ���� ����
        break;
    default:
        printf("�߸��� �����Դϴ�.\n");
    }
}

// ��� ���� �Լ�
void game1() {
    printf("��� ������ �����մϴ�.\n");
    char word[] = "HELLO"; // ��� ���ӿ��� ������ �ܾ�
    int len = strlen(word);
    char guessed[MAX_WORD_LENGTH]; // ������ ���ڸ� ������ �迭
    int tries = 0; // ���� ������ Ƚ��
    int i;

    // guessed �迭 �ʱ�ȭ
    for (i = 0; i < len; i++) {
        guessed[i] = '_';
    }
    guessed[len] = '\0'; // ���ڿ� ���� ��Ÿ���� �� ���� �߰�

    printf("Welcome to Hangman!\n");

    while (tries < MAX_TRIES) {
        printf("Current word: %s\n", guessed);
        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);
        guess = toupper(guess); // �빮�ڷ� ��ȯ

        // ������ ���ڰ� �ܾ �ִ��� Ȯ���ϰ� guessed�� ����
        int found = 0;
        for (i = 0; i < len; i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                found = 1;
            }
        }

        // Ʋ�� ��� ������ Ƚ�� ����
        if (!found) {
            tries++;
            printf("Incorrect guess! Tries remaining: %d\n", MAX_TRIES - tries);
        }
        else {
            printf("Correct guess!\n");
        }

        // ��� ���ڸ� ���߾����� Ȯ��
        if (strcmp(word, guessed) == 0) {
            printf("Congratulations! You guessed the word: %s\n", word);
            break;
        }
    }

    // ������ ���
    if (tries == MAX_TRIES) {
        printf("Sorry, you failed to guess the word. The word was: %s\n", word);
    }
}

// ���� ���� �Լ�
void game2() {
    printf("���� ������ �����մϴ�.\n");
    // ���� ���� �ڵ� �ۼ�
}
// ��ֹ� ���ϱ� ���� �Լ�
void game3() {
    printf("��ֹ� ���ϱ� ������ �����մϴ�.\n");
    // ��ֹ� ���ϱ� ���� �ڵ� �ۼ�
}

    







