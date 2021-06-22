// 문자가 알파벳일까여? 아닐까여?
#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

void check_alpha(char a) { // 리턴 형식이 딱히 없는 알파벳 판별 함수, 매개변수는 문자형 a로 선언

    int i; // 반복문 돌릴 지역변수 i 선언

    for (i = 97; i <= 122; i++) { // ascii code의 a에 해당되는 97부터 z에 해당되는 122까지 반복문을 돌리면서
        // 반복문 각 회차마다 입력받은 문자의 ascii code값과 비교하는데
        if (i == a) // 그 둘이가 같으면
            printf("%c는 알파벳 문자입니다.", a); // 맞다고 출력한다

    }   // 이 함수는 딱히 리턴할 게 없다
}

int main(void) { // main function

    char ch;  // 입력받을 문자 ASCII Code 값 저장할 변수 선언

    printf("문자를 입력하시오: "); // 문자 입력해라는 메시지 출력
    ch = getchar(); // 문자 입력받아 초기 한자리만 ch에 저장

    check_alpha(ch); // 입력받은 문자 한자리를 알파벳 판별 함수의 매개변수 a로 올려버리고 함수 돌림

    return 0; // main function 이 0으로 반환
}