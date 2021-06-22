//입력한 연도는 과연 윤년일까?

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int is_leap(int year) { // 리턴형식이 정수인 윤년판별 함수, 매개변수는 정수형 year로 선언

	// Hint에 제시된 윤년의 조건을 통한 판별
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) // 윤년이면
		return 366; // 366일로 리턴
	else // 윤년이 아니면
		return 365; // 365일로 리턴
}

int main(void){ // main function

	int nyeundo; // 입력받을 연도 정수형 변수 선언

	printf("연도를 입력하시오: "); // 연도 입력해라는 메시지 출력
	scanf_s("%d", &nyeundo); // 입력받은 연도를 정수형 변수 y 에 저장

	// 입력받은 년도를 윤년 구별 함수의 매개변수 year로 올려버리고
	printf("%d년은 %d일입니다.", nyeundo, is_leap(nyeundo)); // 입력받은 년도와 함수 돌리고 리턴받은 값 출력

	return 0; // main function 이 0으로 반환
}