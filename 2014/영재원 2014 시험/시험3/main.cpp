#include <stdio.h>

int main()
{
    int sum, n, i;

    printf("수를 입력하세요  ");
    scanf("%d", &n);

    sum = 0;
    for(i=1; i<=n; i++)
    {
        if (i % 3 == 0)
            sum = sum + i;

    }

    printf("당신이 선택한 수 중에서 3의 배수의 합은 : %d  입니다", sum);

    return 0;
}

/*  nam=n-(n/i)*i; */
