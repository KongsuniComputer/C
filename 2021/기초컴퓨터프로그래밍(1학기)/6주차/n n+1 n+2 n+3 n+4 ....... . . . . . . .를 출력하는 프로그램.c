/*
	n
	n n+1
	n n+1 n+2 n+3
	n n+1 n+2 n+3 n+4
			.
			.
			.
					을 출력하는 프로그램!
*/

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int x, i, n; // 사용자에게 입력받은 값을 저장할 정수인 변수 x, for 반복 돌릴 조건문에 쓰일 정수인 변수 i, 출력할 정수인 변수 n 선언

	printf("정수를 입력하시오 : "); // 사용자에게 정수를 입력해라는 메시지 출력
	scanf_s("%d", &x); // 정수를 받아 x에 저장

	for (i = 1; i <= x; i++) // i는 1로 초기화 하고 사용자로부터 받은 정수값까지 i를 1씩 더하며 반복문을 돌릴 것이다.
	{
		for (n = 1; n <= i; n++) // n은 1로 초기화 하고 앞선 i 값까지 1씩 더하며 반복문을 돌릴 것이다.
		{
			printf("%d ", n); // 정수 n 값을 출력한다.
		}
		printf("\n"); // 내부 for 문단이 끝날 때 마다 줄 바꿔준다.
	}

	return 0; // main function 이 0으로 반환
}