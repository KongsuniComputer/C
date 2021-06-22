//Fibonacci numbers

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int i; // for 조건식에 들어갈 i 선언
	int a = 0, b = 1, c = 0; // 피보나치 수열에서 앞 2개 원소와, 그 2개가 더해서 생기는 원소 각각각 선언 후 초기화

	printf("몇 번째 항까지 구할까요? "); // 사용자에게 몇 번째 항까지 피보나치 수열을 구할 지 물어보는 메시지 출력
	scanf_s("%d", &i); // 항 수 입력 받아 i 에 저장

	for (i; i > 0; i--) // 항 수 입력받은 i의 값이 0보다 클때동안 for 구문 반복
	{
		printf("%d, ", c); // 피보나치수열 의 각항 출력
		//피보나치 수열 연산
		c = a + b; // f_i+1 = f_i + f_i-1
		a = b;
		b = c; 

	}

	return 0; // main function 이 0으로 반환
}