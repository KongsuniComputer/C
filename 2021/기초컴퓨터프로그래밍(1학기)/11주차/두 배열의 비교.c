#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기
#define SIZE 10 // 배열 사이즈를 10으로 정의

int array_equal(int x[], int y[], int size) // 사용자 지정 함수 array_equal
											// 메인함수의 배열 a, b를 받을 정수형 배열 x,y를 매개변수로 지정
											// 10으로 정의된 SIZE를 받을 정수형 변수 size를 매개변수로 지정
{
	int i, result; // 반복문 돌릴 정수형 지역변수 i 선언
					// a, b 배열의 요소 각각을 비교하고 1 or 0을 저장할 정수형 지역변수 result 선언

	for (i = 0; i < SIZE; i++) // i가 0부터 1씩 더해지면서 SIZE-1이 될 때까지 아래의 문장을 반복함
	{
		if (x[i] == y[i]) // 만약에 x[i]와 y[i]의 수가 같다면
			result = 1; // result에 1을 저장
		else {
			// 만약에 x[i]와 y[i]의 수가 다르다면
			result = 0; // result에 0을 저장
			break; // 두 배열이 다른 것을 확인하였으므로 더 이상 확인 없이 for문 탈출
		}
	}
	return result; // result 값을 정수형으로 리턴
}


int main(void){ // main function

	int a[SIZE], b[SIZE], i; 
	// 두 개의 정수 배열 a, b와 반복문 돌릴 정수형 지역변수 i 선언

	// 정수 배열 a, b 입력받기 위한 반복문
	for (i = 0; i < SIZE; i++) { // i가 0부터 1씩 더해지면서 SIZE-1이 될 때까지 아래의 문장을 반복함
		scanf_s("%d", &a[i]); // 정수 배열 a 의 0번에서 9번까지 방에 넣을 10개의 요소 입력받음 
	}
	for (i = 0; i < SIZE; i++) { // i가 0부터 1씩 더해지면서 SIZE-1이 될 때까지 아래의 문장을 반복함
		scanf_s("%d", &b[i]); // 정수 배열 b 의 0번에서 9번까지 방에 넣을 10개의 요소 입력받음 
	}
	
	if (array_equal(a, b, SIZE) == 1) // 만약 사용자 지정 함수 array_equal의 리턴 값이 1과 같다면
		printf("2개의 배열은 같음\n"); // 두 개의 정수 배열 a, b가 같다고 출력
	else if (array_equal(a, b, SIZE) == 0) // 만약 사용자 지정 함수 array_equal의 리턴 값이 0과 이면면
		printf("2개의 배열은 다름\n"); // 두 개의 정수 배열 a, b가 다르다고 출력

	return 0; // main function 이 0으로 반환
}