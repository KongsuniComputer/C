#include <stdio.h>

int main()
{
    int sum, n ,i ,s;

    printf("�ڿ����� �Է��ϼ���\n");
    scanf("%d", &n);

    sum = 0; s = -1;

    for(i=1; i<=n; i++)
    {
        s = s * (-1);
        sum = sum + (i * s);

    }

    printf("%d", sum);


    return 0;
}
