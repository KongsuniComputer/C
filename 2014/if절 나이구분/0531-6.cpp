#include <stdio.h>

int main()
{
    int year;

    printf("나이를 입력하세요 : ");
        scanf("%d", &year);

        if( year <= 6)
            printf("아동입니다 \n");

        else if ( year >= 60)
            printf("경로입니다 \n");

        else
            printf("일반입니다 \n");

        return 0;
}
