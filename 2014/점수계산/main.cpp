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

    printf("총점은 %lf 점, 평균은 %lf 점 입니다.", total, potal);


    return 0;
}
