// 단어의 수 판별기
#include <stdio.h> // STanDard Input Output 함수 헤더파일 전처리기

int main(void) // main function
{
    char *token; // 문자열 토큰 분리 포인터 token 선언
    int output = 0; // 입력받은 문자열의 단어의 수를 출력할 정수형 변수를 0으로 초기화

    char input[100]; // 입력받은 문자열을 저장할, size가 100인 문자열 선언
    printf("문자열을 입력하시오 : "); // 문자열을 입력해라는 msg 출력
    gets(input); // 문자열 입력 받음 (gcc 컴파일러라 gets_s가 없음)

    token = strtok(input, " "); // 문자열 토큰을 분리해주는 strtok 함수 사용하여 문자열을 전달하고 토큰을 얻음
    while(token != NULL) // token 안에서 NULL 문자가 나오기 전까지 아래의 문장을 반복
    {
        output++; // 단어 수를 출력할 변수를 1씩 증가
        token = strtok(NULL, " "); // 토큰을 얻음
    }

    printf("단어의 수는 %d 입니다.", output); // 반복문 다 돌고 나온 output 출력

    return 0; // main function이 0으로 반환
}
