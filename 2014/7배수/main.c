#include <stdio.h>

int main()
{
    int sum, n, i;

    printf("���� �Է��ϼ���  ");
    scanf("%d", &n);

    sum = 0;
    for(i=1; i<=n; i++)
    {
        if (i % 7 == 0)
            sum = sum + i;

    }

    printf("����� ������ �� �߿��� 7�� ����� ���� : %d  �Դϴ�", sum);

    return 0;
}
