// 3개의 정수를 입력받아 그 중에 가장 작은 값 출력하기 

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int x, y, z; // 3개의 정수를 받을 변수 선언
	int minimum; // 대소 비교 후에 가장 작은 정수 값을 저장 할 변수 선언

	printf("3개의 정수를 입력하시오 : "); // 3개의 정수를 입력해라는 메시지 출력
	scanf_s("%d %d %d", &x, &y, &z); // 3개의 정수를 띄어쓰기 단위로 한번만에 입력

	if (x > y) { // 만약 입력 받은 x, y 중에 y가 더 작다고 하면,
		if (y > z) // 그리고 그 y와 입력 받은 z 중에 z가 더 작다고 하면
			minimum = z; // z를 minimum에 저장하자

		else if (z > y) // 그러나 y와 입력 받은 z 중에 y가 더 작다고 하면
			minimum = y; // y를 minimum에 저장하자
	}

	else if (y > x) { // 만약 입력 받은 x, y 중에 x가 더 작다고 하면,
		if (x > z) // 그리고 그 x와 입력 받은 z 중에 z가 더 작다고 하면
			minimum = z; // // z를 minimum에 저장하자

		else if (z > x) // 그러나 x와 입력 받은 z 중에 x가 더 작다고 하면
			minimum = x; // x를 minimum에 저장하자
	}

	printf("가장 작은 정수는 %d 입니다.\n", minimum); // minimum에 저장된 정수 값 출력


	return 0; // main function 이 0으로 반환
}