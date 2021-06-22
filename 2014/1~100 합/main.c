#include <stdio.h>

int main()
{

    int i = 0;
    int sum = 0;

    for(i=1; i<=100; i++)
    {
        sum+=i;
    }

    printf("1부터 100까지의 합은 %d 입니다", sum);


    return 0;
}
