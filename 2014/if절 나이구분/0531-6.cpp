#include <stdio.h>

int main()
{
    int year;

    printf("���̸� �Է��ϼ��� : ");
        scanf("%d", &year);

        if( year <= 6)
            printf("�Ƶ��Դϴ� \n");

        else if ( year >= 60)
            printf("����Դϴ� \n");

        else
            printf("�Ϲ��Դϴ� \n");

        return 0;
}
