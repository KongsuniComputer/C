// 계산기이긴 한데, 각 연산을 몇번 썼는지 친절하게 알려주는 계산기

//#pragma warning(disable: 4996) //scanf_s 사용시 원인모를 오류가 발생하여 사용함 
#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int a, b; // 연산할 두 수 입력받을 정수형 전역변수 a, b
char yeonsan; // 연산자 입력받을 전역변수 yeonsan

int dueohagi(int a, int b) // 더하기 함수, 전역변수이자 매개변수 a, b를 정수형으로 선언
{
	static int count; // 정수형 정적변수 count 선언
	printf("덧셈은 총 %d번 실행되었습니다.\n", count++); // 연산 횟수 출력

	return (a + b); // 입력받은 a와 b를 더해서 리턴
}

int bbaegi(int a, int b)
{
	static int count; // 정수형 정적변수 count 선언
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count++); // 연산 횟수 출력

	return (a - b); // 입력받은 a와 b를 빼서 리턴
}

int gophagi(int a, int b)
{
	static int count; // 정수형 정적변수 count 선언
	printf("곱셉은 총 %d번 실행되었습니다.\n", count++); // 연산 횟수 출력

	return (a * b); // 입력받은 a와 b를 곱해서 리턴
}

int nanugi(int a, int b)
{
	static int count; // 정수형 정적변수 count 선언
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count++); // 연산 횟수 출력

	return (a / b); // 입력받은 a와 b를 나눠서 리턴
}


int main(void) // main function
{

	while (1) // 끝없이 달려보자!
	{
		printf("연산을 입력하시오 : "); // 사용자에게 연산을 어케 할것인지 물어보는 메시지 출력
		scanf_s("%d %c %d", &a, &yeonsan, &b); // 연산할 두 수와 연산자를 입력받고 각 변수에 저장

		// 질문있습니다! scanf_s("%d %c %d", &a, &yeonsan, &b); 로 하고 디버깅 돌리면 오류가 나던데 왜 그런건가요?? 
		// 수업시간에 답변을 들을 수 있길 바랍니다.....!!
		
		if (yeonsan == '+') // 만약 입력받은 연산자가 + 이라면
			printf("연산 결과 : %d\n", dueohagi(a, b)); // 입력받은 두 수를 더하기 함수의 매개변수이자 전역변수인 a, b에 올리고, 함수를 돌려 나온 정수값 리턴받아 출력
		else if (yeonsan == '-') // 만약 입력받은 연산자가 - 이라면
			printf("연산 결과 : %d\n", bbaegi(a, b)); // 입력받은 두 수를 빼기 함수의 매개변수이자 전역변수인 a, b에 올리고, 함수를 돌려 나온 정수값 리턴받아 출력
		else if (yeonsan == '*') // 만약 입력받은 연산자가 * 이라면 
			printf("연산 결과 : %d\n", gophagi(a, b)); // 입력받은 두 수를 곱하기 함수의 매개변수이자 전역변수인 a, b에 올리고, 함수를 돌려 나온 정수값 리턴받아 출력
		else if (yeonsan == '/') // 만약 입력받은 연산자가 / 이라면
			printf("연산 결과 : %d\n", nanugi(a, b)); // 입력받은 두 수를 나누기 함수의 매개변수이자 전역변수인 a, b에 올리고, 함수를 돌려 나온 정수값 리턴받아 출력
		else
			printf("잘못 입력하였습니다.\n"); // 이상한거 치면 잘못 입력했다고 출력
	}

	return 0; // main function 이 0으로 반환
}