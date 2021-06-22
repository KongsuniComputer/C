// 단위 환산 프로그램 (Inch2Cm, Pyoung2Pyoungbangmeter)
#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

// void형 사용자 정의 함수 : 인치를 센티미터로 환산하는 함수
void inchTOcm(float inch) { // 인치를 센티미터로 환산해주는 사용자 지정함수 inchTOcm
							// 아래 메인함수에서 선언된 실수형 지역변수 x를 실수형 매개변수 inch로 받음 
	float cm; // 입력받은 인치 수치를 센티미터로 환산해서 저장 할 실수형 지역변수 cm 선언
	// 1 인치 = 2.5399 센티미터
	cm = inch * 2.5399; // 센티미터 환산 후 cm에 저장
	printf("\n%.2f인치(inch)는 %.2f센티미터(cm)\n", inch, cm); // 입력받은 인치와 그것을 센티미터로 환산 한 cm 출력
	printf("\n성공적으로 환산을 수행하였습니다.\n\n"); // 이 프로그램이 환산을 아주 잘 해줬다고 출력
}

// void형 사용자 정의 함수 : 퍙을 평방미터로 환산하는 함수
void pyoungTOpyoungbangmeter(float pyoung) { // 평을 평방미터로 환산해주는 사용자 지정함수 pyoungTOpyoungbangmeter
											 // 아래 메인함수에서 선언된 실수형 지역변수 x를 실수형 매개변수 pyoung으로 받음 
	float pyoungbangmeter; // 입력받은 평 수치를 평방미터로 환산해서 저장 할 실수형 지역변수 pyoungbangmeter 선언
	// 1 평 = 3.3058 평방미터
	pyoungbangmeter = pyoung * 3.3058; // 평방미터 환산 후 pyoungbangmeter에 저장
	printf("\n%.2f평은 %.2f평방미터(m^2)\n", pyoung, pyoungbangmeter); // 입력받은 평과 그것을 평방미터로 환산 한 pyoungbangmeter 출력
	printf("\n성공적으로 환산을 수행하였습니다.\n\n"); // 이 프로그램이 환산을 아주 잘 해줬다고 출력
}

int main(void) { // main function 시작

	// 메인 함수에서 문자형 변수 1개와 실수형(float) 변수 1개 선언
	char choice; // 알파벳을 입력받아 저장할 문자형 변수 choice 선언
	float x; // 환산 할 수치 입력받아 저장할 실수형 변수 x 선언

	// do_while 문으로 프로그램 무한 반복
	do // do_while 문 시작, do와 while 사이에 있는 문장들을 무조건 한번은 실행해줌
	{
		printf("A. 인치를 센티미터로 환산하는 프로그램\n"); // 선택 메뉴를 구성하는 UI 출력
		printf("B. 평을 평방미터로 환산하는 프로그램\n"); // 선택 메뉴를 구성하는 UI 출력
		printf("Q. 프로그램 종료\n"); // 선택 메뉴를 구성하는 UI 출력
		printf("\n"); // 선택 메뉴를 구성하는 UI 출력
		printf("선택 : "); // 선택 메뉴를 구성하는 UI 출력, 사용자에게 메뉴를 선택해라는 메시지 출력
		scanf_s(" %c", &choice); // 선택 메뉴 알파벳을 입력받아 문자형 변수 choice에 저장

		// if_else 문으로 프로그램 대소 문자 구별 없이 A, B, Q를 판별하여 분기하고 그 외 알파벡은 예외 처리
		// 입력된 알파벳에 따라 분기문 수행 : A는 인치를 센티미터로 환산
		if (choice == 'a' || choice == 'A') { // 만약 입력한 알파벳이 a or A 이라면
			printf("A. 인치를 센티미터로 환산하는 프로그램\n"); // 선택한 메뉴가 인치를 센티미터로 환산하는 메뉴라는 것을 출력해주고
			printf("인치(inch)를 입력하세요 : "); // 사용자에게 센티미터로 환산할 인치의 수치를 입력해라는 메시지 출력
			scanf_s("%f", &x); // 사용자로부터 입력 받은 수치를 실수형 변수 x에 저장
			printf("\n[인치를 센티미터로 환산 함수 호출]\n"); // 사용자 지정 함수를 호출 할 것이라는 메시지 출력
			// 알파벳은 메인 함수에서 입력받아 사용자 정의 함수에 전달
			// 단위 환산 결과는 사용자 정의 함수에서 출력
			inchTOcm(x); // 인치를 센티미터로 환산해주는 사용자 지정함수 inchTOcm의 실수형 매개변수 inch 에 x값을 올려보냄
		}

		// 입력된 알파벳에 따라 분기문 수행 : B는 평을 평방미터로 환산
		else if (choice == 'b' || choice == 'B') { // 만약 입력한 알파벳이 b or B 이라면
			printf("B. 평을 평방미터(m^2)로 환산하는 프로그램\n"); // 선택한 메뉴가 평을 평방미터로 환산하는 메뉴라는 것을 출력해주고
			printf("평을 입력하세요 : "); // 사용자에게 평방미터로 환산할 인치의 수치를 입력해라는 메시지 출력
			scanf_s("%f", &x); // 사용자로부터 입력 받은 수치를 실수형 변수 x에 저장
			printf("\n[평을 평방미터로 환산 함수 호출]\n"); // 사용자 지정 함수를 호출 할 것이라는 메시지 출력
			// 알파벳은 메인 함수에서 입력받아 사용자 정의 함수에 전달
			// 단위 환산 결과는 사용자 정의 함수에서 출력
			pyoungTOpyoungbangmeter(x); // 평을 평방미터로 환산해주는 사용자 지정함수 pyoungTOpyoungbangmeter의 실수형 매개변수 pyoung 에 x값을 올려보냄
		}
		
		// 프로그램 종료는 알파벳 대소 문자 구별 없이 Q 사용
		else if (choice == 'q' || choice == 'Q') { // 만약 입력한 알파벳이 q or Q 이라면
			printf("Q. 프로그램 종료\n"); // 선택한 메뉴가 프로그램을 종료한다는 메뉴라는 것을 출력해주고
			break; // do_while 문을 곧바로 탈출하여 아래에 0으로 리턴 후 프로그램 종료
		}
		
		// A, B, Q 외의 알파벳 입력 시 continue 문 사용하여 다시 입력 요청
		else { // 만약 입력한 알파벳이 a, A, b, B, q, Q 가 아닌 다른 알파벳 이라면
			printf("\n올바른 명령을 입력하십시오.\n\n"); // 사용자에게 제대로 입력해라는 메시지 출력 후
			continue; // do_while 문의 처음으로 되 돌아감
		}
			
	} while (1); // while의 조건이 1이므로 이는 do와 while 안에 있는 내용을 무한 반복하게 된다.

	return 0; // main function 이 0으로 반환
}