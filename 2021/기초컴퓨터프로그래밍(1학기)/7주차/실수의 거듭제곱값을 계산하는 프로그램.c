// 실수의 거듭제곱값을 계산하는 프로그램

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	double r, result = 1.0; // 입력받을 하나의 실수를 저장할 변수 r 을 선언, 결과값이 될 result을 1.0으로 초기화
							// result에 아무것도 없으면, 거듭제곱 구할 때 r^1이 구현 안됨
	int i, n; // for 돌릴 변수 i와, 거듭제곱 횟수를 나타내는 정수의 변수 n 선언

	printf("실수의 값을 입력하시오 : "); // 사용자로부터 실수의 값을 입력해라는 메시지 출력
	scanf_s("%lf", &r); // 실수의 값을 입력받아 r에 저장
	printf("거듭제곱 횟수를 입력하시오 : "); // 사용자로부터 거듭제곱 횟수을 입력해라는 메시지 출력
	scanf_s("%d", &n); // 정수의 값을 입력받아 n에 저장

	for (i = 1; i <= n; i++) { // i가 1부터 1씩 더해지는데, 앞서 입력받은 n까지 반복문을 돌릴 것이다.
		result = result * r; // 거듭제곱값 계산
	}

	printf("결과값은 %lf", result); // 반복문을 다 돌리고 난 후의 거듭제곱값 result 출력

	return 0; // main function 이 0으로 반환
}