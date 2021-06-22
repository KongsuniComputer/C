#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	double x, answer; // 실수인 x값과 계산한 함숫값을 저장할 변수 선언

	printf("x의 값을 입력하시오 : "); // 사용자에게 x값 입력해라는 메시지 출력
	scanf_s("%lf", &x); // 실수값을 입력받고 x에다 저장 

	if (x > 0) { // 만약에 x가 0보다 크다면
		answer = 7 * x + 2; // 7x + 2의 x에 넣어 계산한 값을 answer에 저장
		printf("f(x)의 값은 %lf", answer); // answer을 출력
	}
	else if (x <= 0) { // 만약에 x가 0보다 작거나 같다면
		answer = x*x - 9*x + 2; // x^2 - 9x + 2의 x에 넣어 계산한 값을 answer에 저장
		printf("f(x)의 값은 %lf", answer); // answer을 출력
	}
		

	return 0; // main function 이 0으로 반환
}