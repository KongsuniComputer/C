// 사용자가 입력한 정수의 모든 약수를 구해보자

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int input, divisor; // 사용자에게 입력받을 정수와, for 조건문용 정수 저장할 변수 선언

	printf("정수를 입력하세요 : "); // 사용자에게 정수 입력해라는 메시지 출력
	scanf_s("%d", &input); // 입력받은 정수를 input에 저장

	for (divisor = 1; divisor <= input; divisor++) { //divisor가 1부터 입력받은 정수까지 반복문 돌릴건데, divisor는 1씩 증가할 것.
		if (input % divisor == 0) { // 만약에, 입력받은 값에서 한 턴씩 돌며 1씩 증가하고 있는 divisor를 나누었을때 나머지가 0 이 되면
			printf("%d ", divisor); // 그때의 그 divisor는 약수이므로 출력하자.
		}
	}

	return 0; // main function 이 0으로 반환
}