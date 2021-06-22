#include <stdio.h> // STanDard Input Output 함수 헤더파일 전처리기
#define SIZE 3 // 배열의 사이즈를 3으로 정의

int main(void) // main function
{
    char yeonsan[SIZE]; // 입력받을 연산자를 저장할 문자열 yeonsan 선언
	int a, b, output; // 연산할 두 수와 출력 값을 저장할 정수형 변수 a, b, output 선언

	printf("연산을 입력하시오: "); // 사용자에게 연산을 입력해라는 msg 출력
	scanf("%s %d %d", &yeonsan, &a, &b); // 연산자, a, b 순으로 입력받아 문자열과 각 변수에 저장

    // 문자열들이 서로 일치하는지를 비교할 때는 strcmp()를 사용한다.
	if(strcmp(yeonsan, "add") == 0) // yeonsan에 저장된 문자열이 add가 참이면
        output = a + b; // 두 수를 더한다

	else if(strcmp(yeonsan, "sub") == 0) // yeonsan에 저장된 문자열이 sub가 참이면
        output = a - b; // 두 수를 뺀다

	else if(strcmp(yeonsan, "mul") == 0) // yeonsan에 저장된 문자열이 mul가 참이면
        output = a * b; // 두 수를 곱한다

	else if(strcmp(yeonsan, "div") == 0) // yeonsan에 저장된 문자열이 div가 참이면
        output = a / b; // 두 수를 나눈다

	printf("연산의 결과: %d", output); // 연산 한 값을 출력


	return 0; // main function이 0으로 리턴
}

