// 1부터 n까지 합을 순환구조로 나타내기

#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

int sum(int n) //합을 해주는 함수
{
    if (n <= 1) // 입력받은 수가 1보다 작거나 같으면
        return (1); // 1로 리턴할 것이고
    else // 1보다 크면
        return(n + sum(n - 1)); // n + sum(n - 1) 로 리턴 할 것이고, n <= 1이 될 때 까지 sum(n - 1)을 쭉 구해야 할 것이다.
}

int main() // main function
{
    int num; // 입력받은 정수를 저장할 변수 선언

    printf("정수를 입력하시오: "); // 사용자에게 정수를 입력해라는 메시지 출력
    scanf_s("%d", &num); // 입력받은 정수를 num에 저장

    printf("1부터 %d까지의합 = %d", num, sum(num)); // 입력받은 정수를 합을 해주는 함수의 매개변수 n에 올려 함수를 돌려 나온 정수값 리턴받아 출력

	return 0; // main function 이 0으로 반환
}