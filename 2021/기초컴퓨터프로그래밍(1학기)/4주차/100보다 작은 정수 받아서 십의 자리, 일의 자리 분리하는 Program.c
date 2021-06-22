// 100보다 작은 정수 받아서 십의 자리, 일의 자리 분리하는 Program

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int input, sip, ill; 
	/* 각각 100보다 작은 정수, 분리된 십의 자리의 정수, 
	분리된 일의 자리의 정수 저장 할 변수 선언 */

	printf("100보다 작은 정수를 입력하시오 : "); // User에게 100보다 작은 정수 입력 안내 msg 출력
	scanf_s("%d", &input); // User에게 100보다 작은 정수를 입력 받아서 input에 저장

	sip = input / 10; // 입력 받은 input을 10으로 나눈 값을 sip에 저장
	ill = input % 10; // 입력 받은 input을 10으로 나누고 난 나머지 값을 ill에 저장

	printf("십의 자리 : %d\n", sip); // 십의 자리 sip을 출력
	printf("일의 자리 : %d\n", ill); // 일의 자리 ill을 출력

	return 0; // main function 이 0으로 반환
}