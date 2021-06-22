#include <stdio.h>

int main()
{
    char str[10];
    int num = 0;

    printf("학반입력 \n");
    scanf("%d", &num);
    printf("이름입력 \n");
    scanf("%s", str);

    printf("당신은 프로그래밍 정보영재 %d반 %s 입니다. \n", num, str);

    return 0;


}
