#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	double weight, height; // 사용자의 체중와 키를 각각 실수형으로 저장할 변수 선언
	double stdWeight; // 계산한 표준 체중의 실수을 저장할 변수 선언

	printf("체중과 키를 입력하세요 : "); // 사용자에게 체중과 키를 입력해라는 메시지 출력
	scanf_s("%lf %lf", &weight, &height); // 체중과 키의 실수를 띄어쓰기 단위로 한번만에 입력

	stdWeight = (height - 100) * 0.9; // 입력받은 값을 바탕으로 계산한 표준체중 실수값을 stdWeight에 저장 

	if (stdWeight == weight) // 만약에 입력받은 체중과 계산한 표중체중과 같다면
		printf("표준의 체중입니다"); // 표준 체중이라고 출력
	else if (stdWeight > weight) // 만약에 입력받은 체중이 계산한 표중체중보다 작다면
		printf("저체중 입니다."); // 저체중이라고 출력
	else if (stdWeight < weight) // 만약에 입력받은 체중이 계산한 표중체중보다 크다면
		printf("과체중 입니다."); // 과체중이라고 출력

	return 0; // main function 이 0으로 반환
}