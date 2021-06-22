#include <stdio.h> // STanDard Input Output �Լ� ������� ��ó����
#define PI 3.14 // �������� 3.14�� ����

struct point { // �߽����� x�� y��ǥ�� �����ϴ� ������ ������ ���� ����ü point
    int x, y; // ��ǥ���� �߽���
};

struct circle { // ���� ���е��� �����ϴ� �������� ���� ����ü circle
    struct point center; // ���� �߽�
    double radius; // ���� ������
};

double space(struct circle c1){ //���� ������ ����ϴ� ����� �����Լ�
    double area; // ����� ������ ������ �Ǽ��� ���� area ����
    area = PI * c1.radius * c1.radius; // ���� ��� (c1.radius = 10)

    return area; // ����� ������ �����Լ��� ����
}

double perimeter(struct circle c1){ // ���� �ѷ��� ����ϴ� ����� �����Լ�
    double round; // ����� �ѷ��� ������ �Ǽ��� ���� round ����
    round = 2 * PI * c1.radius; // �ѷ� ���

    return round; // ����� �ѷ��� �����Լ��� ����
}

int main(void) // main function
{
    struct circle c1 = {{0, 0}, 10}; // ����ü c1 �� ���� �ʱ�ȭ

    printf("���� �߽� ��ǥ : (%d, %d)\n", c1.center.x, c1.center.y); // ����ü c1�� �߽��� ����ü�� x�� y ��ǥ ���� ���
    printf("���� ������ : %0.0f\n", c1.radius); // ����ü c1�� ������ radius ���
    printf("���� ���� = %f, ���� �ѷ� = %f", space(c1), perimeter(c1)); // ����ü c1�� �Ű����� ������ ��°�� ����, ���� �� ���� ���� ���

    return 0; // �����Լ��� 0���� ��������~~~
}
