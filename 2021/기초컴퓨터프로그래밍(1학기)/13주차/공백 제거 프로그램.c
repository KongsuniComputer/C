// 빈칸 빼주는 프로그램
#include <stdio.h> // STanDard Input Output 함수 헤더파일 전처리기
#include <string.h> // strlen(문자열) 함수를 사용하기 위한 헤더파일 전처리기

int main(void) // main function
{
    char input[100]; // 공백 문자가 있는 문자열을 입력 받을 크기가 100인 문자열 변수 선언
    char output[100]; // 공백 문자를 제거할 문자열을 출력 할 크기가 100인 문자열 변수 선언

    int i; // 입력 받은 문자열의 Cell 하나씩의 구성을 판별하기 위한
           // 반복문의 조건을 구성하는 정수형 변수 i 선언
    int k = 0; // 반복문 내에서 같이 증가되는 변수 k를 0으로 초기화

    printf("공백 문자가 있는 문자열을 입력하시오 : "); // 사용자에게 문자열을 입력해라는 메시지 출력
    scanf("%s",&input); // 입력받은 문자열을 input 에 저장

    for(i = 0; i < (int)strlen(input); i++){ // i가 0부터 1씩 증가하여 문자열 input의 크기 수가 될 때 까지 반복하는 반복문
            if(input[i] != ' ') // i 번째 Cell에 들어가있는 문자가 공백이 아니라면
                output[k++] = input[i]; // 그 문자는 output 이라는 배열의 같은 Cell에 넣는다

    }

    printf("%s", output); // 문자열 output 출력

    return 0; // main function 이 0으로 반환
}
