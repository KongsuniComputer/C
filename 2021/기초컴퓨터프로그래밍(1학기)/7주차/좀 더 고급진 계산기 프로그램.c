// 좀 더 고급진 계산기 프로그램

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int main(void) { // main function

	int a, b, value; // 계산할 값들을 정수형으로 선언
	char choice; // 입력할 문자 저장할 변수 선언

	printf("*********************\n"); // 연산 메뉴 출력
	printf("  A ---- ADD\n");
	printf("  S ---- SUBTRACT\n");
	printf("  M ---- MULTIPLY\n");
	printf("  D ---- DIVIDE\n");
	printf("  Q ---- QUIT\n");
	printf("*********************\n"); // 연산 메뉴 출력


	do //do_while 문 start, while 문에 처음 도달 하기 전 문장들 다 거침
	{
		printf("연산을 선택하시오: "); // 사용자에게 원하는 연산 기호를 선택해라는 메시지 출력
		scanf_s(" %c", &choice); // 연산 기호 입력받아 choice에 저장

		if (choice == 'Q') // 만약, 입력받은 기호가 Q 라면
			break; // do_while 탈출하여 프로그램 종료

		if (choice == 'A') // 만약 연산 기호를 A로 입력받았다면,
		{
			printf("두 수를 공백으로 분리하여 입력하시오: "); //연산할 두 수 입력 요청
			scanf_s("%d %d", &a, &b); // 띄어쓰기 단위로 입력된 두 수를 각각 a, b 에 저장
			value = a + b; // 그 후에 입력받은 두 수를 더해서
			printf("연산의 결과는 %d 입니다\n\n", value); // 그 값을 출력하고
			continue; // 다른 경우 다 무시하고 while(1)로 가서 무한루프 탑승, 다시 연산을 선택해라는 메시지 출력
		}

		else if (choice == 'S') // 만약 연산 기호를 S로 입력받았다면,
		{
			printf("두 수를 공백으로 분리하여 입력하시오: "); //연산할 두 수 입력 요청
			scanf_s("%d %d", &a, &b); // 띄어쓰기 단위로 입력된 두 수를 각각 a, b 에 저장
			value = a - b; // 그 후에 입력받은 두 수를 빼서
			printf("연산의 결과는 %d 입니다\n\n", value); // 그 값을 출력하고
			continue; // 다른 경우 다 무시하고 while(1)로 가서 무한루프 탑승, 다시 연산을 선택해라는 메시지 출력
		}

		else if (choice == 'M') // 만약 연산 기호를 M로 입력받았다면,
		{
			printf("두 수를 공백으로 분리하여 입력하시오: "); //연산할 두 수 입력 요청
			scanf_s("%d %d", &a, &b); // 띄어쓰기 단위로 입력된 두 수를 각각 a, b 에 저장
			value = a * b; // 그 후에 입력받은 두 수를 곱해서
			printf("연산의 결과는 %d 입니다\n\n", value); // 그 값을 출력하고
			continue; // 다른 경우 다 무시하고 while(1)로 가서 무한루프 탑승, 다시 연산을 선택해라는 메시지 출력
		}

		else if (choice == 'D') // 만약 연산 기호를 M로 입력받았다면,
		{
			printf("두 수를 공백으로 분리하여 입력하시오: "); //연산할 두 수 입력 요청
			scanf_s("%d %d", &a, &b); // 띄어쓰기 단위로 입력된 두 수를 각각 a, b 에 저장
			value = a / b; // 그 후에 입력받은 두 수를 곱해서
			printf("연산의 결과는 %d 입니다\n\n", value); // 그 값을 출력하고
			continue; // 다른 경우 다 무시하고 while(1)로 가서 무한루프 탑승, 다시 연산을 선택해라는 메시지 출력
		}

		else // 만약 A, S, M, D, Q 이외의 문자를 받았다면
			continue; // 다 무시하고 while(1)로 가서 무한루프 탑승, 다시 연산을 선택해라는 메시지 출력

	} while (1); // 각 if문의 continue; 이후 반드시 거치는 곳, 조건식을 1이라 했기 때문에, 무한 루프로 돌 것이다.

	return 0; // main function 이 0으로 반환
}