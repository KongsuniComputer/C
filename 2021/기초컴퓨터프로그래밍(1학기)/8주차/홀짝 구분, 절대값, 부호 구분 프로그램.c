// 홀짝 구분, 절대값, 부호 구분 프로그램
#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기
#include <stdlib.h> // Standard Libary 함수 헤더파일 전처리기 -> 절댓값 abs()함수 이용에 필요

int even(int n) { // 홀짝 구분 함수, 매개변수를 정수형 n으로 선언
    if (n % 2 == 0) // 입력받은 정수값이 짝수면
        return 1; // 1로 리턴될거다
    else // 홀수면
        return 0; // 0으로 리턴될거다
}

int absolute(int n) { // 절댓값 계산 함수, 매개변수를 정수형 n으로 선언
    return(abs(n)); // abs()함수를 통해 계산한 절댓값을 리턴할거다
}

int sign(int n) { // 부호 구분 함수, 매개변수를 정수형 n으로 선언
    if (n > 0) // 입력받은 정수값이 양수면
        return 1; // 1로 리턴될거다
    else if (n == 0) // 입력받은 정수값이 0이면
        return 0; // 0으로 리턴될거다
    else if (n < 0) // 입력받은 정수값이 음수면
        return -1; // -1로 리턴될거다
}


int main(void) { // main function

    int i; // 입력받을 정수 저장할 변수 선언
    
    printf("정수를 입력하시오 : "); // 정수를 입력해라는 메시지 출력
    scanf_s("%d", &i); // 입력받아서 i에 저장

    even(i); // 입력받은 정수값을 위의 매개변수 n으로 들어가서 홀짝 구분 함수 실행
    if(even(i) == 1) //리턴된 값이 1이면 
        printf("even()의 결과 : 짝수\n"); //입력받은 수가 짝수라고 출력
    else if (even(i) == 0) //리턴된 값이 0이면 
        printf("even()의 결과 : 홀수\n"); //입력받은 수가 홀수라고 출력
    
    printf("absolute()의 결과 : %d\n", absolute(i)); // 절댓값 계산하는 함수를 실행한 후 리턴된 값을 출력
   
    sign(i); // 입력받은 정수값을 위의 매개변수 n으로 들어가서 부호 구분 함수 실행
    if (sign(i) == 1) //리턴된 값이 1이면 
        printf("sign()의 결과 : 양수\n"); //입력받은 수가 양수라고 출력
    else if (sign(i) == 0) //리턴된 값이 0이면 
        printf("sign()의 결과 : 0\n"); //입력받은 수가 0이라고 출력
    else if(sign(i) == -1) //리턴된 값이 -1이면 
        printf("sign()의 결과 : 음수\n"); //입력받은 수가 음수라고 출력


    return 0; // main function 이 0으로 반환
}