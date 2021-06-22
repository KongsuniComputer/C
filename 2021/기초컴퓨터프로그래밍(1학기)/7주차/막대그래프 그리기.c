// 막대그래프 그리기

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int i, height; // for문 돌릴 변수와 사용자에게 받은 높이를 저장할 변수 선언

	for(;;) // 반복문 for문을 이용하는데, 셋팅값이 다 비워져있으니 무한 루프를 돌리겠다고 볼 수 있다.
	{
		printf("막대의 높이 (종료 : -1) : "); // 막대의 높이를 입력해라는 메시지 출력
		scanf_s("%d", &height); // 막대의 높이를 입력 받아 height에 저장

		if (height == -1) // 만약 -1이라 입력 받으면, 
			break; // while 문 무한루프 탈출해서 프로그램 종료

		for (i = 1; i <= height; i++) { // 그렇지 않다면, i가 1부터 입력받은 수까지 i를 1씩 더하며 반복문을 돌릴 것인데,
				printf("*"); // 그 돌리는 횟수만큼 *을 출력
		}

		printf("\n"); // 무한루프에서 한 회차당 출력되는 내용들의 줄 바꿈
	}
		
	return 0; // main function 이 0으로 반환
}