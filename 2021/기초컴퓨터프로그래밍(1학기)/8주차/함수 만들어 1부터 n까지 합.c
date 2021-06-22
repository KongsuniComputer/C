#include <stdio.h>

int hap(int x, int y) { // 함수를 만들었다. 매개변수 x, y를 정수형으로 선언

    int i; // for 문 돌릴 변수를 메인함수에서 땡겨와서 함수 내 지역변수선언

    for (i = 0; i <= x; i++) // 매개변수로 교체 n -> x
        y += i; // 매개변수로 교체 sum -> y

    return y; // 반환 될 때, y값을 정수로 반환
}


int main(void) {

    int n, sum = 0;

    printf("정수를 입력하시오 : ");
    scanf_s("%d", &n);

    printf("0부터 %d까지의 합은 %d입니다.\n", n, hap(n, sum)); // 입력받은 n과 sum을 윗 함수의 매개변수로 전달 후 함수 돌리고 리턴받음
    return 0;

}