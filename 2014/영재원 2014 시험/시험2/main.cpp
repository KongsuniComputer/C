#include <stdio.h>

int main()
{
    int pro, ja, math, hap;
    double ave;

    printf("���α׷��� ������ �Է��ϼ��� : ");
    scanf("%d", &pro);
    printf("�ڷᱸ�� ������ �Է��ϼ��� : ");
    scanf("%d", &ja);
    printf("�̻���� ������ �Է��ϼ��� : ");
    scanf("%d", &math);

    hap = pro + ja + math;
    ave = hap / 3;

    printf("\n������ %d �Դϴ�.\n",hap);
    printf("����� %lf �Դϴ�.\n",ave);

    if ( ave >= 90)
        printf("������ A �Դϴ�. \n");

    else if (ave >= 80 )
        printf("������ B �Դϴ�. \n");

    else if (ave >= 70)
        printf("������ C �Դϴ�. \n");

    else if (ave >= 60)
        printf("������ D �Դϴ�. \n");

    else if (ave < 60)
        printf("������ F �Դϴ�. \n");




        return 0;

}




