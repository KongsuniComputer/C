#include <stdio.h> // STanDard Input Output 함수 헤더파일 전처리기
#define PI 3.14 // 원주율을 3.14라 정의

struct point { // 중심점의 x와 y좌표를 저장하는 정수형 변수를 묶은 구조체 point
    int x, y; // 좌표평면상 중심점
};

struct circle { // 원의 성분들을 저장하는 변수들을 묶은 구조체 circle
    struct point center; // 원의 중심
    double radius; // 원의 반지름
};

double space(struct circle c1){ //원의 면적을 계산하는 사용자 지정함수
    double area; // 계산한 면적을 저장할 실수형 변수 area 선언
    area = PI * c1.radius * c1.radius; // 면적 계산 (c1.radius = 10)

    return area; // 계산한 면적을 메인함수로 리턴
}

double perimeter(struct circle c1){ // 원의 둘레를 계산하는 사용자 지정함수
    double round; // 계산한 둘레를 저장할 실수형 변수 round 선언
    round = 2 * PI * c1.radius; // 둘레 계산

    return round; // 계산한 둘레를 메인함수로 리턴
}

int main(void) // main function
{
    struct circle c1 = {{0, 0}, 10}; // 구조체 c1 의 값을 초기화

    printf("원의 중심 좌표 : (%d, %d)\n", c1.center.x, c1.center.y); // 구조체 c1의 중심점 구조체의 x와 y 좌표 각각 출력
    printf("원의 반지름 : %0.0f\n", c1.radius); // 구조체 c1의 반지름 radius 출력
    printf("원의 면적 = %f, 원의 둘레 = %f", space(c1), perimeter(c1)); // 구조체 c1을 매개변수 각각에 통째로 복사, 연산 한 값을 각각 출력

    return 0; // 메인함수가 0으로 가버려요~~~
}
