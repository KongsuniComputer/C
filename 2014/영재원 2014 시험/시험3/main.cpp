#include <stdio.h>

int main()
{
    int sum, n, i;

    printf("���� �Է��ϼ���  ");
    scanf("%d", &n);

    sum = 0;
    for(i=1; i<=n; i++)
    {
        if (i % 3 == 0)
            sum = sum + i;

    }

    printf("����� ������ �� �߿��� 3�� ����� ���� : %d  �Դϴ�", sum);

    return 0;
}

/*  nam=n-(n/i)*i; */
