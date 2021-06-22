#include <stdio.h>

int main()
{
    int bonbong, bonus, total; // 본봉, 보너스 ,총수입액을 저장할 변수
    double tax, real_income; //세금과 실수입액을 저장할 변수

    bonbong = 150;
    bonus = 60;

    total = bonbong + bonus; // 총수익액은 본봉과 보너스를 더함
    tax = total * 0.09; // 세금은 총수입액을 9%
    real_income = total - tax; // 실수입액은 총수입액애서 세금을 뻄

    printf("이몽룡의 실수익액은 %d만원입니다.\n", real_income); //출력
    return 0;

}

