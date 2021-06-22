// int -> char Converter Program

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int ascii; // User에게 받을 ASCII Code 정수 값을 저장 할 변수 선언

	printf("아스키 코드 값을 입력하시오 : "); // User에게 ASCII Code 값 입력 안내 메시지 출력
	scanf_s("%d", &ascii); // User에게 ASCII Code 정수값을 입력 받아서 ascii에 저장

	printf("문자 : %c 입니다.", ascii); // ascii 값에 저장된 정수를 char 형으로 형 변환하여 출력

	return 0; // main function이 0으로 반환
}