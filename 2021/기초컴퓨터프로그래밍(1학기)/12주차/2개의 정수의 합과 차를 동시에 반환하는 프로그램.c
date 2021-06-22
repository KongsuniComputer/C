// 2개의 정수의 합과 차를 동시에 반환하는 프로그램
#include <stdio.h> // STanDard Input Output 함수 헤더파일 전처리기

void get_sum_diff(int a, int b, int* hopPoint, int* chaPoint)
// 입력받은 두 정수를 포인터를 이용해 합과 차 구하는 사용자 지정 함수 get_sum_diff
// main 함수의 두 수 x, y를 정수형 매개변수 a, b로 각각 받고, 
// main 함수에서 선언된 정수형 변수 hop, cha의 주소값을 포인트 매개변수 hopPoint, chaPoint로 각각 받음
{
	*hopPoint = a + b; // 100 + 200 = 300을 hopPoint에 저장된 주소인, main 함수의 hop 변수에 저장
	*chaPoint = a - b; // 100 - 200 = -100을 chaPoint에 저장된 주소인, main 함수의 cha 변수에 저장
}

int main(void) // main function
{
	int x = 100, y = 200; // 입력받을 두 정수를 저장할 정수형 변수 x, y 선언
	int hop, cha; // 사용자 지정 함수의 포인트 매개변수에 넣어주기 위한 정수형 변수 hop, cha 선언

	get_sum_diff(x, y, &hop, &cha); // 사용자 지정 함수 get_sum_diff 호출

	printf("두 수의 합: %d\n", hop); // 사용자 지정 함수 get_sum_diff에서 연산된 hop 출력
	printf("두 수의 차: %d\n", cha); // 사용자 지정 함수 get_sum_diff에서 연산된 cha 출력

	return 0; // main function 이 0으로 반환
}