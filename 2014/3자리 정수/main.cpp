#include <stdio.h>

int main()
{
    int N, a, b, c;

    printf("3자리 정수를 입력하세요");
    scanf("%d", &N);

    a = N / 100;
    b = N % 100;
    b = b / 10;
    c = N % 10;

    N = c * 100 + b *10 +a;

    printf("결과값은 %d 입니다", N);
}
