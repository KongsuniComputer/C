#include <stdio.h>

int main()
{
    double weight, height;
    double bmi;

    printf("�����Ը� �Է��ϼ��� : ");
    scanf("%lf", &weight);
    printf("Ű�� �Է��ϼ��� : ");
    scanf("%lf", &height);

    height = height / 100;
    bmi = weight /(height * height);
    printf("����� BMI�� : %.1lf �Դϴ�.\n", bmi);

    if (bmi <= 18.5 && bmi < 23.1 )
        printf("�����Դϴ�. \n");

    else if (bmi > 30.0 )
        printf("�����Դϴ�. \n");

    else if (bmi <= 25.1 && bmi <= 30.0 )
        printf("���Դϴ�. \n");

    else if (bmi <= 23.1 && bmi < 25.1 )
        printf("��ü���Դϴ�. \n");

    else if (bmi < 18.5)
        printf("��ü���Դϴ�. \n");

        return 0;


}
