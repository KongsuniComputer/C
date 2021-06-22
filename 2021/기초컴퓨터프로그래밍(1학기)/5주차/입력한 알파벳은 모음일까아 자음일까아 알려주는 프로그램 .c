// 입력한 알파벳은 모음일까아? 자음일까아? 알려주는 프로그램 

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function
	
	char c; // 알파벳을 받을 변수 c 선언

	printf("문자를 입력하시오 : "); // 문자 입력 안내 메시지 출력
	c = getchar(); // 알파벳을 입력받아 그 알파벳에 해당되는 int형으로 반환하고, 그 값을 c에 저장

	switch(c) // c 값에 따라 모음, 자음 선별 start
	{
		case 65: // ASCII Code에서 A
		case 97: // ASCII Code에서 a
			printf("모음 입니다.\n"); // 선별된 값이 모음이라고 출력
			break; // 선별 되었으므로 아래 코드를 진행하지 않고 switch 문단 탈출
		case 69: // ASCII Code에서 E
		case 101: // ASCII Code에서 e
			printf("모음 입니다.\n"); // 선별된 값이 모음이라고 출력
			break; // 선별 되었으므로 아래 코드를 진행하지 않고 switch 문단 탈출
		case 73: // ASCII Code에서 I
		case 105: // ASCII Code에서 i
			printf("모음 입니다.\n"); // 선별된 값이 모음이라고 출력
			break; // 선별 되었으므로 아래 코드를 진행하지 않고 switch 문단 탈출
		case 79: // ASCII Code에서 O
		case 111: // ASCII Code에서 o
			printf("모음 입니다.\n"); // 선별된 값이 모음이라고 출력
			break; // 선별 되었으므로 아래 코드를 진행하지 않고 switch 문단 탈출
		case 85: // ASCII Code에서 U
		case 117: // ASCII Code에서 u
			printf("모음 입니다.\n"); // 선별된 값이 모음이라고 출력
			break; // 선별 되었으므로 아래 코드를 진행하지 않고 switch 문단 탈출

		default: // 모음을 제외한 나머지 자음
			printf("자음 입니다.\n"); // 선별된 값이 자음이라고 출력
			break; // 선별 되었으므로 switch 문단 탈출
	}

	return 0; // main function 이 0으로 반환
}