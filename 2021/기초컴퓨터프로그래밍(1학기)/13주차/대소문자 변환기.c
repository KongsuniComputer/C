// 대소문자 변환기
#include <stdio.h> // STanDard Input Output 함수 헤더파일 전처리기

int main(void) // main function
{
    int input, output; // getchar로 입력받은 문자를 저장할 정수형 변수 input 과
                       // 문자 변환 후 저장하여 putchar로 출력할 변수 output 선언

    while(1) // 무한 반복
    {

    printf("문자를 입력하시오 : "); // 사용자로부터 알파벳을 입력해라는 메시지 출력
    input = getchar(); // 하나의 알파벳을 입력 받아 코드값을 정수형으로 반환하여 input에 저장


    if (input >= 97 && input <= 122){ // 만약 입력 받은 알파벳이 소문자(a~z -> ASCII CODE : 97 ~ 122) 이라면
        output = input - 32; // 그 알파벳에 해당되는 ASCII CODE에서 32를 빼줌 (A~Z-> ASCII CODE : 65 ~ 90)
        putchar(output); // ASCII CODE의 뺄셈 연산을 한 값에 해당되는 문자를 출력
        putchar('\n'); // 줄 띄어쓰기용
    }

    else if (input >= 65 && input <= 90){ // 만약 입력 받은 알파벳이 소문자(A~Z-> ASCII CODE : 65 ~ 90) 이라면
        output = input + 32; // 그 알파벳에 해당되는 ASCII CODE에서 32를 더해줌 (a~z -> ASCII CODE : 97 ~ 122)
        putchar(output); // ASCII CODE의 덧셈 연산을 한 값에 해당되는 문자를 출력
        putchar('\n'); // 줄 띄어쓰기용
    }

    else if (input == 46){ // 만약 입력 받은 문자가 . (ASCII CODE : 46) 이라면
        break; // while 루프 탈출하여 프로그램 종료
    }

    else // 알파벳 대, 소문자가 아닌 다른 문자를 입력했다면
        printf("\n올바른 알파벳을 입력하시오.\n\n"); // 사용자에게 잘 입력해라고 메시지 출력하여 처음으로 되돌아감

     getchar(); // 문제의 Hint에 나와있는 것 처럼 줄바꿈 문자를 제거하기 위하여 getchat 재호출
    }

    return 0; // main function 이 0으로 반환
}
