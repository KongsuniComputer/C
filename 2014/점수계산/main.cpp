#include <stdio.h>

int main()
{
    double math = 0, it = 0, mol = 0;
    double total = 0, potal = 0;

    printf("����, ����, �ɸ������� ������� �Է����ּ���\n");
    scanf("%lf\n",&it);
    scanf("%lf\n",&math);
    scanf("%lf\n",&mol);


    total = it + math + mol;
    potal = total / 3;

    printf("������ %lf ��, ����� %lf �� �Դϴ�.", total, potal);


    return 0;
}
