#include <stdio.h>

int main()
{
    int sum, n ,i ,s;

    printf("자연수를 입력하세요\n");
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
