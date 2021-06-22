// 변수에 할당 된 정수 바꿔치기 Program

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int x = 10; // x값에 10 이라는 정수로 초기화
	int y = 20; // y값에 20 이라는 정수로 초기화
	int temp; // x와 y가 거쳐갈 제 3의 접시 마련하기

	printf("교환 전 x = %d, y = %d\n", x, y); // x, y 바꿔치기 전 상태 출력

	temp = x; // 10을 temp에 저장
	x = y; // 20을 x에 저장
	y = temp; // 10을 y에 저장
	
	printf("교환 후 x = %d, y = %d\n", x, y); // x, y 바꿔 친 후 상태 출력

	return 0; // main function 이 0으로 반환
}