#include <stdio.h>

int main() {
	//출력과 입력 : pruntf(),scanf()
	//문자,문자열 입력 : getchar(char),gets(char[])

	// %c쪽에 공백값('\0')이나 줄바꿈값('\n')이 들어가는 경우 발생
	//버퍼 : scanf()와 같은 입력문을 통해, 입력값들을 임시로 저장하는 공간
	// rewind(stdin); => 버퍼를 비워주는 역할
	
	int num;
	char ch ,c;
	scanf("%d  ",&num  );
	rewind(stdin);
	scanf("%c", &c);
    rewind(stdin);
	printf("%d %c %c", num ,ch ,c);

}
