// 화씨온도 -> 섭씨온도 변환 Program

#include <stdio.h>	//  Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function 

	double C, F; // 섭씨 온도 값, 화씨 온도의 실수 값을 저장할 변수 선언

	printf("화씨값을 입력하시오 : "); // 입력 안내 메시지 출력
	scanf_s("%lf", &F);				// 화씨 온도 실수를 받아서 C에저장

	C = 5.0 / 9.0 * (F - 32.0); // 화씨온도 -> 섭씨온도 변환 계산

	printf("섭씨값은 %lf도입니다.", C); // 계산한 화씨온도 C 출력

	return 0; // main function 이 0으로 반환
}