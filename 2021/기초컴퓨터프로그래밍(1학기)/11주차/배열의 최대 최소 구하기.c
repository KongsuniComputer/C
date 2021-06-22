#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int x[10], i, minimum, maximum; 
	// 정수형 10칸짜리 배열 x, 반복문 돌릴 정수형 변수, 최소값과 최대값을 저장할 정수형 변수 초기화

	for (i = 0; i <= 9; i++) { // i가 0부터 1씩 더하여 9가 될때까지 아래의 문장을 반복
		x[i] = rand(); // x 배열의 각 칸에 랜덤한 수를 넣음
	}

	// 배열 내 요소들의 비교를 통해 최소, 최대값 판별
	minimum = x[0]; // 첫번째 요소를 최소값으로 지정
	maximum = x[0]; // 첫번째 요소를 최대값으로도 지정

	for (i = 0; i <= 9; i++) { // i가 0부터 1씩 더하여 9가 될때까지 아래의 문장을 반복
		if (maximum < x[i]) // 만약에 x[i]가 한칸 앞인 x[i-1]보다 크다면
			maximum = x[i]; // 그 x[i]는 최댓값이므로 maximum에 저장

		if (minimum > x[i]) // 만약에 x[i]가 한칸 앞인 x[i-1]보다 작다면
			minimum = x[i]; // 그 x[i]는 최소값이므로 minimum에 저장
	}
	// 배열 내 요소 중 전 후 관계의 크기를 비교하여 
	// 반복문의 매 턴마다 끝날때까지 최소값, 최대값이 갱신됨

	printf("최대값은 %d\n최소값은 %d", maximum, minimum); // 배열 내에서 판별한 최대값, 최소값을 출력

	return 0; // main function 이 0으로 반환
}