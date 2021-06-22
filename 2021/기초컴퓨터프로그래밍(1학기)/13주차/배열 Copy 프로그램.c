// 배열 Copy 프로그램
#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

void array_copy (int *A, int *B, int size){ // 문제에서 주어진 배열 복사 사용자 정의 함수 array_copy
                                            // 메인함수의 배열 A, B를 정수형 포인터 매개변수 A, B로 받고,
                                            // 두 배열의 크기인 10을 정수형 매개변수 size로 받음

	int i; // 아래의 반복문의 조건에 사용 할 정수형 지역변수 i 선언

    for(i = 0; i < size; i++){ // 배열의 요소를 하나씩 각각 복사하기 위해 반복문 이용
		B[i]=A[i]; // 각 Cell 마다 배열 A 에서 B로 복붙
        printf("%d ", B[i]); // 배열 B에 복붙한 결과를 Cell 단위로 띄어쓰기 구분하여 출력
	}

}


int main(void){ // main function

	int A[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0}; // 크기가 10인 정수형 배열 A를 문제에 주어진 결과에 맞춰 초기화
	int B[10]; // 배열 A로부터 복붙할 배열 B 선언

	int i; // 아래의 반복문의 조건에 사용 할 정수형 지역변수 i 선언

    // 배열 A 출력
	printf("A[] = "); // A[] =
    for(i = 0; i < 10; i++) // 배열 A를 Cell 단위로 띄어쓰기 구분하여 출력하기 위해 반복문 이용
        printf("%d ", A[i]); // 1 2 3 0 0 0 0 0 0 0

    // 배열 B 출력ㅇ
	printf("\nB[] = "); // B[] =
	array_copy(A, B, 10); // 배열 복사 사용자 정의 함수 array_copy 호출
                          // 배열 A, B와 배열의 크기 10을 매개변수로 올림

}
