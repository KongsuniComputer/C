// 1부터 100 사이의 모든 3의 배수의 합을 구해보자

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function
	
	int i = 1, hap = 0; // 1부터 100 중 3의 배수를 거르기 위한 정수인 변수 i를 1로 초기화
						// 3의 배수끼리 더해서 저장할 정수인 변수 hap를 0으로 초기화

	while (i <= 100) { // i가 1부터 100이 될때까지 아래의 문장을 반복하겠다.
		if (i % 3 == 0) { // 만약 i 값에 3을 나누었을때 0이면? ( = i가 3의 배수이면?)
			hap += i; // hap = hap + i 을 하겠다. ( → 3의 배수만 더하겠다.)
		}

		i++;
	}

	printf("1부터 100 사이의 모든 3의 배수의 합은 %d 입니다\n", hap); // 3의 배수 합 출력

	return 0; // main function 이 0으로 반환
}