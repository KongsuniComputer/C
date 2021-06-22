#include <stdio.h>

int main()
{
    double math = 0, it = 0, mol = 0;
    double total = 0, potal = 0;

    printf("정보, 수학, 믈리점수를 순서대로 입력해주세요\n");
    scanf("%lf\n",&it);
    scanf("%lf\n",&math);
    scanf("%lf\n",&mol);


    total = it + math + mol;
    potal = total / 3;

    printf("총점은 %lf 점, 평균은 %lf 점 입니다.\n", total, potal);


		if( potal >= 90.0)
            printf(" 등급은 A 입니다 \n");

        else if ( 89.0 >= potal && potal >= 70.0)
            printf(" 등급은 B 입니다 \n");

        else
            printf(" 등급은 C 입니다 \n");


    return 0;
}
