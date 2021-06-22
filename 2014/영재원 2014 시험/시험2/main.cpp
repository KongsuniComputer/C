#include <stdio.h>

int main()
{
    int pro, ja, math, hap;
    double ave;

    printf("프로그래밍 점수를 입력하세요 : ");
    scanf("%d", &pro);
    printf("자료구조 점수를 입력하세요 : ");
    scanf("%d", &ja);
    printf("이산수학 점수를 입력하세요 : ");
    scanf("%d", &math);

    hap = pro + ja + math;
    ave = hap / 3;

    printf("\n총점은 %d 입니다.\n",hap);
    printf("평균은 %lf 입니다.\n",ave);

    if ( ave >= 90)
        printf("학점은 A 입니다. \n");

    else if (ave >= 80 )
        printf("학점은 B 입니다. \n");

    else if (ave >= 70)
        printf("학점은 C 입니다. \n");

    else if (ave >= 60)
        printf("학점은 D 입니다. \n");

    else if (ave < 60)
        printf("학점은 F 입니다. \n");




        return 0;

}




