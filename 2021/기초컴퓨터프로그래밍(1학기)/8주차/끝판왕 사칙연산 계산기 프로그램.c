// 끝판왕 사칙연산 계산기 프로그램

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

void menuInterface() { // 메뉴화면용 함수, 입력받을거도 리턴보낼거도 없다.
    
    int i; // for 구문을 돌리기 위한 지역변수 선언

    for (i = 0; i < 35; i++) // i가 0부터 1씩 늘어나는데 34가 될때까지
        printf("="); // = 을 출력한다.
    printf("\nMENU\n"); // 한 줄 바꾸고 MEMU 제목 출력하고 한 줄 바꾸어
    for (i = 0; i < 35; i++)// i가 0부터 1씩 늘어나는데 34가 될때까지
        printf("="); // = 을 출력한다.
    printf("\n1. 덧셈\n"); // 메뉴 항목 각각 출력
    printf("2. 뺄셈\n"); // 메뉴 항목 각각 출력
    printf("3. 곱셈\n"); // 메뉴 항목 각각 출력
    printf("4. 나눗셈\n"); // 메뉴 항목 각각 출력
    printf("5. 나머지\n"); // 메뉴 항목 각각 출력
}

int dueohagi(int x, int y) { // 더하기 함수, 매개변수 x, y를 정수형으로 선언
    return (x + y); // x와 y를 더한 값을 정수로 리턴
}

int bbaegi(int x, int y) { // 빼기 함수, 매개변수 x, y를 정수형으로 선언
    return (x - y); // x와 y를 뺀 값을 정수로 리턴
}

int gophagi(int x, int y) { // 곱하기 함수, 매개변수 x, y를 정수형으로 선언
    return (x * y); // x와 y를 곱한 값을 정수로 리턴
}
 
int nanugi(int x, int y) { // 나누기 함수, 매개변수 x, y를 정수형으로 선언
    return (x / y); // x와 y를 나눈 값을 정수로 리턴
}

int trash(int x, int y) { // 나머지 함수, 매개변수 x, y를 정수형으로 선언
    return (x % y); // x와 y를 나누고 난 나머지 값을 정수로 리턴
} 


int main(void) { // main function

    int menuNumber, a, b; // 입력받을 메뉴의 숫자와, 연산할 두개의 수 각각을 저장할 정수형 변수 선언
    char yes; // do_while 문에서 초기 흐름 끝내고 반복 탈건지 말건지 구분하는 while절 용 변수 선언

    menuInterface(); // 메뉴화면용 함수를 불러옴

    do // do_while문 시작
    {
        printf("원하는 메뉴를 선택하시오 (1 ~ 5) : "); // 원하는 연산 메뉴의 숫자를 입력해라는 메시지 출력
        scanf_s("%d", &menuNumber); // 입력받은 메뉴의 숫자를 입력받아 menuNumber에 저장
        printf("숫자 2개를 입력하시오 : "); // 연산할 두 수를 입력해라는 메시지 출력
        scanf_s("%d %d", &a, &b); // 띄어쓰기 단위로 입력받은 두 수를 a와 b에 각각 저장

        if (menuNumber == 1) // 만약 입력받은 메뉴의 숫자가 1이라면
            printf("연산 결과 : %d\n", dueohagi(a, b)); // 입력받은 두 수를 더하기 함수의 매개변수 a, b에 올려 함수를 돌려 나온 정수값 리턴받아 출력
        else if (menuNumber == 2) // 만약 입력받은 메뉴의 숫자가 2이라면
            printf("연산 결과 : %d\n", bbaegi(a, b)); // 입력받은 두 수를 빼기 함수의 매개변수 a, b에 올려 함수를 돌려 나온 정수값 리턴받아 출력
        else if (menuNumber == 3) // 만약 입력받은 메뉴의 숫자가 3이라면
            printf("연산 결과 : %d\n", gophagi(a, b)); // 입력받은 두 수를 곱하기 함수의 매개변수 a, b에 올려 함수를 돌려 나온 정수값 리턴받아 출력
        else if (menuNumber == 4) // 만약 입력받은 메뉴의 숫자가 4이라면
            printf("연산 결과 : %d\n", nanugi(a, b)); // 입력받은 두 수를 나누기 함수의 매개변수 a, b에 올려 함수를 돌려 나온 정수값 리턴받아 출력
        else if (menuNumber == 5) // 만약 입력받은 메뉴의 숫자가 5이라면
            printf("연산 결과 : %d\n", trash(a, b)); // 입력받은 두 수를 나머지 함수의 매개변수 a, b에 올려 함수를 돌려 나온 정수값 리턴받아 출력

        printf("계속하려면 y를 누르세요 : "); // 연산이 끝난 후 프로그램을 계속 쓸건지 물어보는 메시지 출력
        scanf_s(" %c", &yes); // 사용자로부터 문자 입력 받아 yes에 저장

    } while (yes == 'y'); // 만약 사용자가 y라 입력하면 do의 첫부분으로 되 돌아 간 다.
        

    return 0; // main function 이 0으로 반환
}