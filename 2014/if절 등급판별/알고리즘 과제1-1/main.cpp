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

    printf("������ %lf ��, ����� %lf �� �Դϴ�.\n", total, potal);


		if( potal >= 90.0)
            printf(" ����� A �Դϴ� \n");

        else if ( 89.0 >= potal && potal >= 70.0)
            printf(" ����� B �Դϴ� \n");

        else
            printf(" ����� C �Դϴ� \n");


    return 0;
}
