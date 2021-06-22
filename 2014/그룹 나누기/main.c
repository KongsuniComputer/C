#include <stdio.h>

int main()
{
    int n;
    int g1 = 0, g2 = 0, g4 = 0, g8 = 0, g16 = 0;

    printf("학생 수 를 입력하세요\n");
    scanf("%d", &n);

    while(n>=16)
    {
        g16 = g16 + 1;
        n = n - 16;
    }

    while(n>=8)
    {
        g8 = g8 + 1;
        n = n - 8;
    }

    while(n>=4)
    {
        g4 = g4 + 1;
        n = n - 4;
    }

    while(n>=2)
    {
        g2 = g2 + 1;
        n = n - 2;
    }

    while(n>=1)
    {
        g1 = g1 + 1;
        n = n - 1;
    }

    printf("그룹의 학생수가 16명일때 그룹수는 %d 개 입니다.\n", g16);
    printf("그룹의 학생수가 8명일때 그룹수는 %d 개 입니다.\n", g8);
    printf("그룹의 학생수가 4명일때 그룹수는 %d 개 입니다.\n", g4);
    printf("그룹의 학생수가 2명일때 그룹수는 %d 개 입니다.\n", g2);
    printf("그룹의 학생수가 1명일때 그룹수는 %d 개 입니다.\n", g1);

    return 0;
}
