#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기
#include <math.h> // 제곱근을 계산해주는 함수 sqrt()를 이용하기 위한 math 함수 헤더파일 전처리기

#define SIZE 10 // SIZE를 10으로 정의

static double average, deviation; 
// 평균과 표준편차 연산하는 함수 내에서 반복문 돌릴때마다 나오는 계산값인 평균과 편차값이 계속 누적되도록 실수형 정적 변수로 선언

void avg(double* a, int size) { // 배열 내 요소들의 평균을 구해주는 사용자 지정 함수 avg

    int i; // 사용자 지정 함수 avg 내의 반복문에서 사용 할 정수형 지역변수 i 선언
    double sum = 0; // 배열 내 요소들의 합을 저장할 정수형 지역변수 sum을 0으로 초기화

    for (i = 0; i < size; i++) // i가 0부터 1씩 더해져 9가 될때까지 
        sum += a[i]; // 각 요소들의 합을 누적하여 계산 후 sum에 저장

    average = sum / size; // 계산한 값을 배열의 크기인 10으로 나누고 이를 평균 average에 저장

    printf("평균값은 %f \n", average); // average 출력
}
void stdev(double* a, int size) { // 배열 내 요소들의 표준편차를 구해주는 사용자 지정 함수 stdev

    int i; // 사용자 지정 함수 stdev 내의 반복문에서 사용 할 정수형 지역변수 i 선언
    double sum = 0; // 배열 내 요소들의 합을 저장할 정수형 지역변수 sum을 0으로 초기화

    for (i = 0; i < size; i++) // i가 0부터 1씩 더해져 9가 될때까지 
        sum += (a[i] - average) * (a[i] - average); // 각 요소에서 평균을 뺀 값의 제곱을 누적하여 계산 후 sum에 저장

    deviation = sqrt(sum / size); // 계산한 값을 배열의 크기인 10으로 나누고 루트 씌워서 이를 표준편차 deviation에 저장

    printf("표준편차값은 %f \n", deviation); // deviation 출력
}

int main() { // main function

    double arr[SIZE] = { 0 }; // 크기가 10짜리 배열 arr의 요소를 모두 0으로 초기화
    int i; // 반복문을 돌리기 위해 정수형 변수 i 선언

    for (i = 0; i < SIZE; i++) { // i가 0부터 1씩 더해져 9가 될때까지 아래의 문장들을 반복
        printf("데이터를 입력하시오: "); // 사용자에게 데이터를 입력해라고 출력
        scanf_s("%lf", &arr[i]); // 입력받은 데이터를 엔터단위로 입력받아서 배열 arr에 0번 방부터 9번 방까지 순차적으로 저장
    }

    avg(arr, SIZE); // 배열 내 요소들의 평균을 구해주는 사용자 지정 함수 avg의 실수형 매개변수 a에는 배열 arr, 
                    // 정수형 매개변수 size에는 위에서 정의된 SIZE를 올려줌
    stdev(arr, SIZE); // 배열 내 요소들의 표준편차를 구해주는 사용자 지정 함수 stdev의 실수형 매개변수 a에는 배열 arr, 
                      // 정수형 매개변수 size에는 위에서 정의된 SIZE를 올려줌

    return 0; // main function 이 0으로 반환
}