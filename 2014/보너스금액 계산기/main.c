#include <stdio.h>

int main()
{
    int bonbong, bonus, total; // ����, ���ʽ� ,�Ѽ��Ծ��� ������ ����
    double tax, real_income; //���ݰ� �Ǽ��Ծ��� ������ ����

    bonbong = 150;
    bonus = 60;

    total = bonbong + bonus; // �Ѽ��;��� ������ ���ʽ��� ����
    tax = total * 0.09; // ������ �Ѽ��Ծ��� 9%
    real_income = total - tax; // �Ǽ��Ծ��� �Ѽ��Ծ׾ּ� ������ �M

    printf("�̸����� �Ǽ��;��� %d�����Դϴ�.\n", real_income); //���
    return 0;

}

