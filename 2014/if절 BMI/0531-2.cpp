#include <stdio.h>

int main()
{
    double weight, height;
    double bmi;

    printf("몸무게를 입력하세요 : ");
    scanf("%lf", &weight);
    printf("키를 입력하세요 : ");
    scanf("%lf", &height);

    height = height / 100;
    bmi = weight /(height * height);
    printf("당신의 BMI는 : %.1lf 입니다.\n", bmi);

    if (bmi <= 18.5 && bmi < 23.1 )
        printf("정상입니다. \n");

    else if (bmi > 30.0 )
        printf("고도비만입니다. \n");

    else if (bmi <= 25.1 && bmi <= 30.0 )
        printf("비만입니다. \n");

    else if (bmi <= 23.1 && bmi < 25.1 )
        printf("과체중입니다. \n");

    else if (bmi < 18.5)
        printf("저체중입니다. \n");

        return 0;


}
