// 삼각형의 닮음을 이용한 피라미드 높이 구하기

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	double bc, ac, ae, de; 
	/* 주어진 문제에 따라, 각각 지팡이의 높이, 지팡이 그림자의 길이, 
	피라미드까지의 거리, 피라미드의 높이를 실수 형태로 저장할 변수 선언*/ 

	printf("지팡이의 높이를 입력하시오 : "); // 지팡이의 높이 실수 값 입력 안내 msg 출력
	scanf_s("%lf", &bc); // User에게 지팡이의 높이 실수 값 입력 받아서 bc에 저장

	printf("지팡이 그림자의 길이를 입력하시오 : "); // 지팡이 그림자의 길이 실수 값 입력 안내 msg 출력
	scanf_s("%lf", &ac); // User에게 지팡이 그림자의 길이 실수 값 입력 받아서 ac에 저장

	printf("피라미드까지의 거리를 입력하시오 : "); // 피라미드까지의 거리 실수 값 입력 안내 msg 출력
	scanf_s("%lf", &ae); // User에게 피라미드까지의 거리 실수 값 입력 받아서 ae에 저장

	de = (ae * bc) / ac; // AC : AE = BC : DE 식에서 DE를 구하여 de에 저장

	printf("피라미드의 높이는 %lf입니다", de); // 피라미드의 높이인 de를 실수 형식으로 출력
	
	return 0; // main function이 0으로 반환
}