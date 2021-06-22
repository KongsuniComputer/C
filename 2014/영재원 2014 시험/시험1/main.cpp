#include <stdio.h>

int main()
{
    int num;
    char str[10];

    printf("년도와 명칭을 입력하세요.\n\n");

    printf("년도입력 : ");
    scanf("%d", &num);
    printf("명칭입력 : ");
    scanf("%s", str);

    printf("%d 년은 %s 입니다.",num,str);





    return 0;
}
