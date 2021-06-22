#include <stdio.h>

int main()
{
    int A, B ,p ,q ,r;

    printf("3자리 정수 2개를 입력하세요 \n");
    scanf("%d %d", &A, &B);

    p = B % 10;
    q = B / 10 % 10;
    r = B / 100;

    printf("%10d \n", A);
    printf("* %8d \n", B);
    printf("------------\n");
    printf("%10d \n", A*p);
    printf("%9d \n", A*q);
    printf("%8d \n", A*r);
    printf("------------\n");
    printf("%10d \n", A*B);

}
